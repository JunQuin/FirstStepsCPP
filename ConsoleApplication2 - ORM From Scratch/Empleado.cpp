#include "Empleado.h"

Empleado::Empleado() : nombre("Desconocido"), apellidoPaterno("Desconocido"), apellidoMaterno("Desconocido"), edad(0), antiguedad(0), salario(0.00) {}

Empleado::Empleado(const std::string& nom, const std::string& apPat, const std::string& apMat, int edad, int ant, double sal) {
	setNombre(nom);
	setApellidoPaterno(apPat);
	setApellidoMaterno(apMat);
	setEdad(edad);
	setAntiguedad(ant);
	setSalario(sal);
}

void Empleado::setNombre(const std::string& nom) {
	if (!nom.empty()) {
		nombre = nom;
	}
	else
	{
		nombre = "Desconocido";
	}
}

void Empleado::setApellidoPaterno(const std::string& apPat) {
	if (!apPat.empty()) {
		apellidoPaterno = apPat;
	}
	else
	{
		apellidoPaterno = "Desconocido";
	}
}

void Empleado::setApellidoMaterno(const std::string& apMat) {
	if (!apMat.empty()) {
		apellidoMaterno = apMat;
	}
	else
	{
		apellidoMaterno = "Desconocido";
	}
}

void Empleado::setEdad(int edad) {
	if (edad >= 18 && edad < 120) {
		this->edad = edad;
	}
	else
	{
		this->edad = 0;
	}
}

void Empleado::setAntiguedad(int ant) {
	if (ant >= 0) {
		antiguedad = ant;
	}
	else
	{
		antiguedad = 0;
	}
}

void Empleado::setSalario(double sal) {
	if (sal >= 0) {
		salario = sal;
	}
	else
	{
		salario = 0.00;
	}
}


// Método virtual
void Empleado::trabajar() {
	std::cout << "Empleado trabajando..." << std::endl;
}
