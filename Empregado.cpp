#include "Empregado.hpp"


Empregado::Empregado(): nome(""), salarioHora(0) {}
    
Empregado::Empregado(std::string _nome, double salarioH): nome(_nome), salarioHora(salarioH) {}
    
Empregado::~Empregado() {};

double Empregado::pagamentoMes(double horasTrabalhadas) {
    const double jornadaNormal = 8.0;
    double horasContabilizadas = horasTrabalhadas;
	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > jornadaNormal)
    if (horasTrabalhadas > jornadaNormal) {
        double horaExtra = horasTrabalhadas - jornadaNormal;
        horasContabilizadas += horaExtra / 2;
    }
	return horasContabilizadas * salarioHora;
}
	
void Empregado::setNome(std::string _nome) {
    nome = _nome;
}
    
std::string Empregado::getNome() {
    return nome;
}

void Empregado::setSalarioHora(double salario) {
    salarioHora = salario;
}
	
double Empregado::getSalarioHora() {
    return salarioHora;
}
