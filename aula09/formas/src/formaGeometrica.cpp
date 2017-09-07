#include "formageometrica.hpp"

FormaGeometrica::FormaGeometrica(){
	tipo = "Generico";
	lados = 4;
	base = 10.0;
	altura = 5.0;
}

FormaGeometrica::FormaGeometrica(string tipo, int lados, float base, float altura){
	this->tipo = tipo;
	this->lados = lados;
	this->base = base;
	this->altura = altura;
}

string FormaGeometrica::setTipo(){
		return tipo;
}
void FormaGeometrica::setTipo(string tipo){
		this->tipo = tipo;
}

int FormaGeometrica::getLados(){
	return lados;
}
void FormaGeometrica::setLados(string lados){
		this->lados = lados;
}

float FormaGeometrica::getBase(){
	return base;
}
void FormaGeometrica::getBase(float base){
	this->base = base;
}

float FormaGeometrica::getAltura(){
	return altura;
}
void FormaGeometrica::getAltura(float altura){
	this->altura = altura;
}

float FormaGeometrica::calculaArea(){
	return base*altura;
}
float FormaGeometrica::calculaPerimetro(){
	return 2*(base+altura);
}
