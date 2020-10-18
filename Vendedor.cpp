#include "Vendedor.hpp"

Vendedor::Vendedor():
  Empregado(), quotaMensalVendas(0) {}

Vendedor::Vendedor(std::string _nome, double salarioH, double quotaMensal):
  Empregado(_nome, salarioH), quotaMensalVendas(quotaMensal) {}
  
Vendedor::~Vendedor() {}

double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * 12;
}

void Vendedor::mostrarDadosMensais(double horas) {
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl; 
  std::cout << std::endl;
  }
  
void Vendedor::setQuotaMensalVendas(double quotaMensal){
    quotaMensalVendas = quotaMensal;
}
    
double Vendedor::getQuotaMensalVendas() {
    return quotaMensalVendas;
}
