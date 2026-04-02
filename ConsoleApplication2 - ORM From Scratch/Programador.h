#pragma once
#include "Empleado.h"
#include "IBonoStrategy.h"
#include <iostream>
#include <memory>

class Programador : public Empleado {
private:
	std::unique_ptr<IBonoStrategy> estrategia;
public:
	Programador(); // constructor por defecto
	Programador(const std::string& nom, const std::string& apPat, const std::string& apMat,
		int edad, int ant, double sal, std::unique_ptr<IBonoStrategy> est);

	void trabajar() override; // sobrescribe el método virtual
	double calcularBono() override; // sobrescribe el método virtual para calcular el bono específico del gerente
	void MostrarDatos() override;
};
