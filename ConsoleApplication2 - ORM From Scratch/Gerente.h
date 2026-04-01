#pragma once
#include "Empleado.h"
#include <iostream>

class Gerente : public Empleado {
public:
	Gerente(); // constructor por defecto
	Gerente(const std::string& nom, const std::string& apPat, const std::string& apMat,
		int edad, int ant, double sal);

	void trabajar() override; // sobrescribe el método virtual
};
