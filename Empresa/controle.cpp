#include "controle.h"

void controle_empresas::add_Empresa(string nome_empresa, string CNPJ){	
	empresa Empresa_aux;
	Empresa_aux.set_nome(nome_empresa);
	Empresa_aux.set_CNPJ(CNPJ);
	Empresas.push_back(Empresa_aux);
};

void controle_empresas::listar_empresas(){
	int tam = Empresas.size();
	for (int i = 0; i < tam; i++){
		cout << "Nome:" <<Empresas[i].get_nome() << endl << "CNPJ: " << Empresas[i].get_CNPJ() << endl;
	}
};

void controle_empresas::add_funcionarios(string CNPJ, string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao){
	int tam = Empresas.size();
	bool sucesso;
	int i;
	for (i = 0; i < tam; i++){
		if (CNPJ == Empresas[i].get_CNPJ()){
			sucesso = Empresas[i].add_funcionario(nome,salario,cpf,dia_de_admissao,mes_de_admissao,ano_de_admissao);
			if (sucesso){
				cout << "Funcionario adicionado com sucesso." << endl;
				return;
			}
			break;
		}
	}
	cout << "Essa empresa não está cadastrada" << endl;
};

void controle_empresas::listar_funcionarios_empresa(string CNPJ){
	int tam = Empresas.size();
	for (int i = 0; i < tam; i++){
		if (CNPJ == Empresas[i].get_CNPJ()){
			Empresas[i].listar_func();
		return;
		}
	}
	cout << "Empresa não existe" << endl;
};

void controle_empresas::listar_funcionarios_em_experiencia(string CNPJ){
	int tam = Empresas.size();
	for (int i = 0; i < tam; i++){
		if (CNPJ == Empresas[i].get_CNPJ()){
			Empresas[i].listar_func_periodo_exp();
		return;
		}
	}
	cout << "Empresa não existe" << endl;
};

void controle_empresas::alterar_salario_funcionario(string CNPJ, float aumento){
	int tam = Empresas.size();
	for (int i = 0; i < tam; i++){
		if (CNPJ == Empresas[i].get_CNPJ()){
			Empresas[i].aumentar_salario_todos_funcionarios(aumento);
		return;
		}
	}
	cout << "Empresa não existe" << endl;
};
