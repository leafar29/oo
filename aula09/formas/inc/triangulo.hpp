#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "formaGeometrica.hpp"

class Triangulo : public formaGeometrica{
	public:
		Triangulo(float base, float altura);

		//Sobrescrita de Método
		float calculaArea();
		float calculaPerimetro();
}

#endif
