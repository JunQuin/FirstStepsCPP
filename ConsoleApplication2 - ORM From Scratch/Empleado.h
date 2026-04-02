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

	virtual ~Empleado() {
		std::cout << "Destructor de Empleado\n";
	}

	// Método virtual puro: obliga a las clases derivadas a implementarlo
	// Metodo virtual para ser sobreescrito por las clases derivadas (Polimorfismo)
	// Metodo virtual que hace que la clase se vuelva abstracta
	virtual void trabajar() = 0;

	virtual double calcularBono() = 0; // cada derivada debe implementar su fórmula

	// método abstracto
	virtual void MostrarDatos() = 0; // cada derivada debe implementar su propia forma de mostrar datos

#pragma region Encapsulación
	// setters

	void setNombre(const std::string& nom);
	void setApellidoPaterno(const std::string& apPat);
	void setApellidoMaterno(const std::string& apMat);
	void setEdad(int edad);
	void setAntiguedad(int ant);
	void setSalario(double sal);

	// getters

	std::string getNombre() const { return nombre; }
	std::string getApellidoPaterno() const { return apellidoPaterno; }
	std::string getApellidoMaterno() const { return apellidoMaterno; }
	int getEdad() const { return edad; }
	double getSalario() const { return salario; }
	int getAntiguedad() const { return antiguedad; }
#pragma endregion

};