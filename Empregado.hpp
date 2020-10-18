#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    Empregado();
    
    Empregado(std::string _nome, double salarioH);
    
    virtual ~Empregado();

    double pagamentoMes(double horasTrabalhadas);

    virtual void mostrarDadosMensais(double horas) = 0;
	
    void setNome(std::string _nome);
    
    std::string getNome();

    void setSalarioHora(double salario);
	
    double getSalarioHora();

  protected:
    std::string nome;
    double salarioHora;  
	
};

#endif
