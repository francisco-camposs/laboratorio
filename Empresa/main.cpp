#include <iostream>
#include "controle.h"

using namespace std;

date empresa::data_atual(21,3,2019);

int main (){
	controle_empresas empresas;
	empresas.add_Empresa("JBC Industries", "34853478563475600");
	empresas.add_funcionarios("34853478563475600", "Bozossauro", 2000.99, "1234567898", 11, 3, 2019);
	empresas.add_funcionarios("34853478563475600", "Salnorabo", 200.00, "1234567890", 12, 3, 2012);
	empresas.add_funcionarios("34853478563475600", "Bolsonazi", 250.00, "1234567893", 12, 3, 2017);
	empresas.add_funcionarios("34853478563475600", "Bolsotario", 3200.00, "1234567899", 01, 4, 2014);
	empresas.listar_funcionarios_empresa("34853478563475600");
	empresas.listar_funcionarios_em_experiencia("34853478563475600");
	empresas.alterar_salario_funcionario("34853478563475600", 100);
	empresas.listar_funcionarios_empresa("34853478563475600");
	// empresas.add_Empresa("Lan House and Bagulhos Sinistros", "12345678900");
	// empresas.add_funcionarios( "12345678900", "Dragão Azul", 1000000, "987654234", 3, 4, 2004);
	// empresas.add_funcionarios( "12345678900", "Dragão Vermelho", 1000000, "987654235", 27, 9, 2018);
	// empresas.add_funcionarios( "12345678900", "Dragão Verde", 1000000, "987654236", 8, 4, 1999);
	// empresas.add_funcionarios( "12345678900", "Dragão Negro", 1000000, "987654237", 31, 1, 2019);
	// empresas.add_funcionarios( "12345678900", "Dragão Branco", 1000000, "987654239", 30, 1, 2019);
	// empresas.listar_funcionarios_empresa("12345678900");
	// empresas.listar_funcionarios_em_experiencia("12345678900");
	empresas.listar_empresas();
	return 0;
}