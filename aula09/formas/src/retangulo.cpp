#include "retangulo.hpp"

Retangulo::Retangulo(){
	tipo = "Retângulo";
	lados = 4;
	base = 8.0;
	altura = 7.0;
}
Retangulo::Retangulo(float base, float altura){
	tipo = "Retângulo";
	lados = 4;
	this->base = base;
	this->altura = altura;
}
