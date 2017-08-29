#include "pessoa.hpp"
#include "aluno.hpp"

int main(){

  Pessoa *p1 = new Pessoa();
  Aluno *a1 = new Aluno();

  cout <<"Este é o nome de p1: " + p1->getNome() << endl;
  cout << "Este é o nome de a1: " + a1->getNome() <<endl;

  return 0;
}
