#pragma once
#include "Empleado.h"

class IBonoStrategy {
public:
    virtual ~IBonoStrategy() = default;
    virtual double calcularBono(const Empleado& e) = 0;
};