#include "Gerente.h"

// Constructor por defecto
Gerente::Gerente() : Empleado() {}

// Constructor con parámetros
Gerente::Gerente(const std::string& nom, const std::string& apPat, const std::string& apMat,
    int edad, int ant, double sal, std::unique_ptr<IBonoStrategy> est)
    : Empleado(nom, apPat, apMat, edad, ant, sal), estrategia(std::move(est)) {
}

// Sobrescritura del método virtual
void Gerente::trabajar() {
    std::cout << "El gerente organiza al equipo y supervisa proyectos." << std::endl;
}

double Gerente::calcularBono() {
    return estrategia->calcularBono(*this);
}

void Gerente::MostrarDatos() {
    std::cout << "Gerente: " << getNombre() << " " << getApellidoPaterno() << " " << getApellidoMaterno()
        << ", Edad: " << getEdad()
        << ", Antigüedad: " << getAntiguedad()
        << ", Salario: $" << getSalario() << std::endl;
}