#ifndef CANETA_HPP
#define CANETA_HPP

#include<iostream>
#include<string>

using namespace std;

class Caneta {
  private:
	//Atributos
	string nome;
	string cor;
	string marca;
	float preco;
	float comprimento;

  public:
	//Metodos
	Caneta();
	~Caneta();

	//Metodos acessores
	string getNome();
	void setNome(string nome);

	string getCor();
	void setCor(string cor);

	string getMarca();
	void setMarca(string marca);

	float getPreco();
	void setPreco(float preco);

	//Outros metodos
	void escrever(float comprimento);
	void destampar();

};

#endif
