#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {
  public:
    Engenheiro();
    
    Engenheiro(std::string _nome, double salarioH, int _projetos);
    
    ~Engenheiro();

    void mostrarDadosMensais (double horas) override;
    
    void setProjetos(int _projetos);
    
    int getProjetos();
    
  private:
  	int projetos;
	
};

#endif
