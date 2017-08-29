#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "pessoa.hpp"

class Aluno: public Pessoa {
private:
  double ira;
public:
  Aluno();
  ~Aluno();
};
#endif
