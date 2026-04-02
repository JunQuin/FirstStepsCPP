#include "Programador.h"

// Constructor por defecto
Programador::Programador() : Empleado() {}

// Constructor con parámetros
Programador::Programador(const std::string& nom, const std::string& apPat, const std::string& apMat,
	int edad, int ant, double sal, std::unique_ptr<IBonoStrategy> est)
	: Empleado(nom, apPat, apMat, edad, ant, sal), estrategia(std::move(est)) {}

// Sobrescritura del método virtual
void Programador::trabajar() {
	std::cout << "El programador escribe codigo y resuelve bugs." << std::endl;
}

double Programador::calcularBono() {
	// Ejemplo: bono = 20% del salario + antigüedad * 100
	return 0.20 * getSalario() + getAntiguedad() * 100;
}

void Programador::MostrarDatos() {
	std::cout << "Gerente: " << getNombre() << " " << getApellidoPaterno() << " " << getApellidoMaterno()
		<< ", Edad: " << getEdad()
		<< ", Antigüedad: " << getAntiguedad()
		<< ", Salario: $" << getSalario() << std::endl;
}