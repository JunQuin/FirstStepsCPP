#pragma once
#include "IBonoStrategy.h"

class BonoProgramador : public IBonoStrategy {
public:
	// Fórmula específica para Programador
	double calcularBono(const Empleado& e) override;
};