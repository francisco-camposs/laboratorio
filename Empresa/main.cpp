#include <iostream>
#include "empresa.h"

using namespace std;

date empresa::data_atual(21,3,2019);


// void aumentar_salario_todos_funcionarios(float alteracao);
// void add_funcionario(string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao);
// void listar_func();
// void listar_func_periodo_exp();

int main (){
	empresa JBC;
	JBC.set_nome("JBC Industries LTDA");
	cout << "laranja1"<< endl;
	JBC.set_CNPJ("34853478563475600");
	cout << "laranja2"<< endl;
	JBC.add_funcionario("Salnorabo", 200.00, "1234567890", 12, 3, 2012);
	cout << "laranja3"<< endl;
	JBC.add_funcionario("Bozossauro", 2000.00, "1234567898", 11, 3, 2019);
	cout << "laranja4"<< endl;
	JBC.add_funcionario("Bozonaro", 201.00, "1234567894", 15, 2, 2019);
	cout << "laranja5"<< endl;
	JBC.add_funcionario("Bolsonazi", 250.00, "1234567893", 12, 3, 2017);
	cout << "laranja6"<< endl;
	JBC.add_funcionario("Bolsotario", 3200.00, "1234567899", 01, 4, 2014);
	cout << "laranja7"<< endl;
	JBC.add_funcionario("bostanaro", 50200.00, "1234567891", 30, 12, 2000);
	cout << "laranja8"<< endl;
	JBC.add_funcionario("bozozilla", 34200.00, "1234567899", 12, 6, 2011);
	cout << "laranja10"<< endl;
	JBC.listar_func();
	cout << "laranja11"<< endl;
	return 0;
}