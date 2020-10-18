#include "Engenheiro.hpp"

Engenheiro::Engenheiro():
  Empregado(), projetos(0) {}

Engenheiro::Engenheiro(std::string _nome, double salarioH, int _projetos):
  Empregado(_nome, salarioH), projetos(_projetos) {}
  
Engenheiro::~Engenheiro() {}

void Engenheiro::mostrarDadosMensais (double horas) {
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << projetos << std::endl;  
  std::cout << std::endl;
}

void Engenheiro::setProjetos(int _projetos) {
    projetos = _projetos;
}
    
int Engenheiro::getProjetos() {
    return projetos;
}
