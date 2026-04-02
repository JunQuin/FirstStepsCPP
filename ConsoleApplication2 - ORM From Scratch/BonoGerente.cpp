#include "BonoGerente.h"

double BonoGerente::calcularBono(const Empleado& e) {
	return 0.20 * e.getSalario() + e.getAntiguedad() * 100;
}
