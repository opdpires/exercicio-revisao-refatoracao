#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    Vendedor();
    
    Vendedor(std::string _nome, double salarioH, double quotaMensal);
    
    ~Vendedor();

	double quotaTotalAnual();

    void mostrarDadosMensais(double horas) override;
    
    void setQuotaMensalVendas(double quotaMensal);
    
    double getQuotaMensalVendas();

  private:
	  double quotaMensalVendas;
	
};

#endif
