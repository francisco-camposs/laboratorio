#include <iostream>
#include "controle.h"

using namespace std;

date empresa::data_atual(21,3,2019);

int main (){
	controle_empresas empresas;
	empresas.add_Empresa("JBC Industries", "34853478563475600");
	empresas.add_funcionarios("34853478563475600", "Alexandre", 2000.99, "1234567898", 11, 3, 2019);
	empresas.add_funcionarios("34853478563475600", "Alexandro", 2300.30, "1234567890", 12, 3, 2012);
	empresas.add_funcionarios("34853478563475600", "Roberval", 2505.50, "1234567893", 12, 3, 2017);
	empresas.add_funcionarios("34853478563475600", "Jacoberto", 3200.15, "1234567899", 01, 4, 2014);
	empresas.listar_funcionarios_empresa("34853478563475600");
	empresas.listar_funcionarios_em_experiencia("34853478563475600");
	empresas.alterar_salario_funcionario("34853478563475600", 100);
	empresas.listar_funcionarios_empresa("34853478563475600");
	empresas.listar_empresas();
	return 0;
}