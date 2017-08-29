#include<iostream>
#include "caneta.hpp"

using namespace std;

int main(int argc, char ** argv){
	
	Caneta caneta1;
	Caneta caneta2;
	Caneta * caneta3;
	
	cout << "Ponteiro da caneta3 criado" << endl;

	caneta3 = new Caneta(); //Caneta 3 instanciada ELA NAO EH DESTRUIDA AUTOMATICAMENTE
	Caneta * caneta4 = new Caneta(); // outra forma de instanciar o objeto

	cout << "Cor da caneta1: " << caneta1.getCor() << endl;
	cout << "Marca da caneta: " << caneta1.getMarca() << endl;
	cout << "Preco da caneta: " << caneta1.getPreco() << endl;

	//Objetos alocados staticamente, usa-se o PONTO .
	caneta1.setNome("Caneta1");
	caneta1.setCor("Azul");
	caneta1.setMarca("Pentel");
	caneta1.setPreco(19.90);

	caneta2.setNome("Caneta2");
	caneta2.setCor("Vermelho");
	caneta2.setMarca("Risk");
	caneta2.setPreco(24.99);

	//Objetos alocados dinamicamente, usa-se o vetor ->
	caneta3->setNome("NegoPreto");
	caneta3->setCor("Preto");
	caneta3->setMarca("FabricaDeMemes");
	caneta3->setPreco(8000.00);

	caneta4->setNome("Zeca");
	caneta4->setCor("Lilas");
	caneta4->setMarca("Ta doido");
	caneta4->setPreco(0.99);

	cout << "Cor da caneta1: " << caneta1.getCor() << endl;
	cout << "Marca da caneta: " << caneta1.getMarca() << endl;
	cout << "Preco da caneta: " << caneta1.getPreco() << endl;
	
	cout << "Cor da caneta2: " << caneta2.getCor() << endl;
	cout << "Marca da caneta2: " << caneta2.getMarca() << endl;
	cout << "Preco da caneta2: " << caneta2.getPreco() << endl;
	
	cout << "Cor da caneta3: " << caneta3->getCor() << endl;
	cout << "Marca da caneta3: " << caneta3->getMarca() << endl;
	cout << "Preco da caneta3: " << caneta3->getPreco() << endl;
	
	cout << "Cor da caneta4: " << caneta4->getCor() << endl;
	cout << "Marca da caneta4: " << caneta4->getMarca() << endl;
	cout << "Preco da caneta4: " << caneta4->getPreco() << endl;
	


	delete(caneta3); //Destruindo a memoria alocada de caneta3
	delete(caneta4);

	return 0;
}
