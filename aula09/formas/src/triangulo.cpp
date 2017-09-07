#include "triangulo.hpp"

Triangulo::Triangulo(float base, float altura){
	setTipo("Triãngulo");
	setLados(3);
	setBase(base);
	setAltura(altura);
}

float Triangulo::calculaArea(){
	return getBase()*getAltura() /2;
}
float calculaPerimetro(){
	return 3*getBase();
}
