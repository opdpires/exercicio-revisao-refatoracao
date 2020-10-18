#include "Engenheiro.hpp"
#include "Vendedor.hpp"


int main() {

  Engenheiro* eng = new Engenheiro[3];
  
  eng[0] = Engenheiro("Joao Snow", 35, 3);
  eng[0].mostrarDadosMensais (9.5);
  
  eng[1] = Engenheiro("Daniela Targaryen", 30, 1);
  eng[1].mostrarDadosMensais (8);

  eng[2] = Engenheiro("Bruno Stark", 30, 2);
  eng[2].mostrarDadosMensais (8);


  Vendedor* vend = new Vendedor[3];

  vend[0] = Vendedor("Tonho Lannister", 20, 5000);
  vend[0].mostrarDadosMensais (6);

  vend[1] = Vendedor("Jose Mormont", 25, 3000);
  vend[1].mostrarDadosMensais (8);

  vend[2] = Vendedor("Sonia Stark", 30, 4000);
  vend[2].mostrarDadosMensais (8);
  
  delete[] eng;
  delete[] vend;
  
  return 0;	
}
