#include "pessoa.hpp"
#include "aluno.hpp"

int main(){

  Pessoa *p1 = new Pessoa();
  Aluno *a1 = new Aluno();
  
  a1->imprimirDados(); // a1 consegue acessar os métodos
                      // herdados da Classe Pessoa
  cout << "Este é o nome de a1: " + a1->getNome() <<endl;

  return 0;
}
