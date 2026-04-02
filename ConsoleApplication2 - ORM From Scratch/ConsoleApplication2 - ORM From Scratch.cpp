// ConsoleApplication2 - ORM From Scratch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <memory>
#include "Gerente.h"
#include "Programador.h"
#include "BonoGerente.h"
#include "BonoProgramador.h"

int main()
{
	std::vector<std::unique_ptr<Empleado>> empleados;

	// Debido a la abstraccion del metodo trabajar, no se pueden crear objetos de tipo Empleado, ya que es una clase abstracta
	// empleados.push_back(std::make_unique<Empleado>("Juan", "Perez", "Lopez", 30, 5, 15000));
	
	empleados.push_back(std::make_unique<Gerente>("Maria", "Garcia", "Hernandez", 40, 10, 25000, std::make_unique<BonoGerente>()));
	empleados.push_back(std::make_unique<Programador>("Don", "Torcuato", "De Tonelada", 69, 4, 90000, std::make_unique<BonoProgramador>()));

	double totalBonos = 0.0;

	for (auto& e : empleados)
	{
		e->MostrarDatos();
		e->trabajar(); // Llama a la versión correspondiente según el tipo real del objeto (polimorfismo dinámico)
		double bono = e->calcularBono();
		std::cout << "Bono calculado: $" << bono << std::endl;
		totalBonos += bono;
	}

	std::cout << "Total de bonos a pagar: $" << totalBonos << std::endl;

	// Replace the raw pointers with smart pointers
	//Empleado* e1 = new Empleado("Juan", "Pérez", "López", 30, 5, 15000);
	//Empleado* e2 = new Gerente("María", "García", "Hernández", 40, 10, 25000);
	//Empleado* e3 = new Programador("Don", "Torcuato", "De Tonelada", 69, 4, 90000);

	//e1->trabajar(); // Llama a la versión de Empleado
	//e2->trabajar(); // Llama a la versión de Gerente (polimorfismo dinámico)
	//e3->trabajar(); // Llama a la versión de Programador (polimorfismo dinámico)

	//delete e1;
	//delete e2;
	//delete e3;
	
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
