#pragma once
#include "Empleado.h"
#include <iostream>

class Programador : public Empleado {
public:
	Programador(); // constructor por defecto
	Programador(const std::string& nom, const std::string& apPat, const std::string& apMat,
		int edad, int ant, double sal);

	void trabajar() override; // sobrescribe el método virtual
};

