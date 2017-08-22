#include "caneta.hpp" //as "" fazem a busca na memsa pasta do arquivo


Caneta::Caneta(){
	cor = " ";
	marca = " ";
	preco = 0.f;
}

Caneta::~Caneta(){
	std::cout << "Destruindo o objeto " << getNome() << std::endl;
}

std::string Caneta::getNome(){
	return nome;
}
void Caneta::setNome(std::string nome){
	this->nome = nome;
}

std::string Caneta::getCor(){
	return cor;
}
void Caneta::setCor(std::string cor){
	this->cor = cor;
}
std::string Caneta::getMarca(){
	return marca;
}
void Caneta::setMarca(std::string marca){
	this->marca = marca;
}
float Caneta::getPreco(){
	return preco;
}
void Caneta::setPreco(float preco){
	this->preco = preco;
}

void Caneta::escrever(float comprimento){
	std::cout << "A caneta esta escrevendo..." << std::endl;
}

