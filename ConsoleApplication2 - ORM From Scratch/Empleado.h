#pragma once
#include <string>
#include <iostream>

class Empleado {
private:
	std::string nombre, apellidoPaterno, apellidoMaterno;
	int edad, antiguedad;
	double salario;

public:
	Empleado();

	Empleado(const std::string& nom, const std::string& apPat, const std::string& apMat, int edad, int ant, double sal);

	void setNombre(const std::string& nom);
	void setApellidoPaterno(const std::string& apPat);
	void setApellidoMaterno(const std::string& apMat);
	void setEdad(int edad);
	void setAntiguedad(int ant);
	void setSalario(double sal);

	// Metodo virtual para ser sobreescrito por las clases derivadas (Polimorfismo)
	virtual void trabajar();
};