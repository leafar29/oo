#ifndef PESSOA_HPP
#define PESSOA_HPP

#include<iostream>
#include<string>

using namespace std;

class Pessoa {
	private:
		string nome;
		string matricula;
		int idade;
		string sexo;
		string telefone;

	public:
		Pessoa(); //Construtor

		~Pessoa(); // Destrutor

		string getNome();
		void setNome(string nome);

		string getMatricula();
		void setMatricula(string matricula);

		int getIdade();
		void setIdade(int idade);

		string getSexo();
		void setSexo(string sexo);

		string getTelefone();
		void setTelefone(string telefone);

		void imprimirDados();
};

#endif
