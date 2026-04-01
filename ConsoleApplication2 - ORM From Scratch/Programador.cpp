#include "Programador.h"

// Constructor por defecto
Programador::Programador() : Empleado() {}

// Constructor con parámetros
Programador::Programador(const std::string& nom, const std::string& apPat, const std::string& apMat,
	int edad, int ant, double sal)
	: Empleado(nom, apPat, apMat, edad, ant, sal) {
}

// Sobrescritura del método virtual
void Programador::trabajar() {
	std::cout << "El programador escribe codigo y resuelve bugs." << std::endl;
}