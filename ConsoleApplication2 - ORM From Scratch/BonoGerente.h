#pragma once
#include "IBonoStrategy.h"

class BonoGerente : public IBonoStrategy {
public:
    double calcularBono(const Empleado& e) override;
};