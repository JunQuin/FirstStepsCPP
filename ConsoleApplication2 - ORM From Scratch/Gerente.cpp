#include "Gerente.h"

// Constructor por defecto
Gerente::Gerente() : Empleado() {}

// Constructor con parámetros
Gerente::Gerente(const std::string& nom, const std::string& apPat, const std::string& apMat,
    int edad, int ant, double sal)
    : Empleado(nom, apPat, apMat, edad, ant, sal) {
}

// Sobrescritura del método virtual
void Gerente::trabajar() {
    std::cout << "El gerente organiza al equipo y supervisa proyectos." << std::endl;
}