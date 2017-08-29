#include "pessoa.hpp"
#include<iostream>

using namespace std;

	Pessoa::Pessoa(){
		nome = " ";
		idade = 0;

	}

	string Pessoa::getNome(){
		return nome;
	}

	void Pessoa::setNome(string nome){
		this->nome = nome;
	}

	string Pessoa::getMatricula(){
		return matricula;
	}

	void Pessoa::setMatricula(string matricula){
		this->matricula = matricula;
	}

	int Pessoa::getIdade(){
		return idade;
	}

	void Pessoa::setIdade(int idade){
		this->idade = idade;
	}

	string Pessoa::getSexo(){
		return sexo;
	}

	void Pessoa::setSexo(string sexo){
		this->sexo = sexo;
	}

	string Pessoa::getTelefone(){
		return telefone;
	}

	void Pessoa::setTelefone(string telefone){
		this->telefone = telefone;
	}

	void Pessoa::imprimirDados(){
		cout << "Não implementado" << endl;
	}
