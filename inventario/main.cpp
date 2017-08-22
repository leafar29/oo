#include<iostream>
#include "caneta.hpp"

using namespace std;

int main(int argc, char ** argv){
	
	Caneta caneta1;
	
	std::cout << "Cor da caneta1: " << caneta1.getCor() << std::endl;
	std::cout << "Marca da caneta: " << caneta1.getMarca() << std::endl;
	std::cout << "Preco da caneta: " << caneta1.getPreco() << std::endl;

	caneta1.setCor("Azul");
	caneta1.setMarca("Pentel");
	caneta1.setPreco(19.90);

	
	std::cout << "Cor da caneta1: " << caneta1.getCor() << std::endl;
	std::cout << "Marca da caneta: " << caneta1.getMarca() << std::endl;
	std::cout << "Preco da caneta: " << caneta1.getPreco() << std::endl;

	return 0;
}
