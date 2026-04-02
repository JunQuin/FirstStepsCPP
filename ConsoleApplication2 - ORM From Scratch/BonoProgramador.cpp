#include "BonoProgramador.h"

double BonoProgramador::calcularBono(const Empleado& e) {
	return 0.10 * e.getSalario() + e.getAntiguedad() * 200;
}
