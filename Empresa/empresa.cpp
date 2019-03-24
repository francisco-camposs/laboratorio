#include "empresa.h"

	//Métodos set, para inserção de dados
	void empresa::set_nome(string nome_empresa){
		nome = nome_empresa;
	};
	void empresa::set_CNPJ(string num_CNPJ){
		CNPJ = num_CNPJ;
	};

	//Métodos get, para retorno de dados
	string empresa::get_nome(){
		return nome;
	};
	string empresa::get_CNPJ(){
		return CNPJ;
	};

	/************************************
	métodos de manipulação de Funcionarios
	************************************/

	//Aumenta o salario de todos os funcionarios
	void empresa::aumentar_salario_todos_funcionarios(float alteracao){
		for (unsigned int i = 0; i < funcionarios.size(); i++){
			funcionarios[i].alterar_salario(alteracao);
		}
	};

	bool empresa::add_funcionario(string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao){
		for (int i = 0; i < (int)funcionarios.size(); i++){
			if(cpf == funcionarios[i].get_CPF()){
				cout << "funcionario já existe, Não é possível adicionar." << endl;
				return false;			
			}
		}
		funcionario func;
		func.set_Nome(nome);
		func.set_Salario(salario);
		func.set_CPF(cpf);
		func.set_data_de_admissao(dia_de_admissao, mes_de_admissao, ano_de_admissao);
		funcionarios.push_back(func);
		return true;
	};


	//Listar todos osfuncionarios
	void empresa::listar_func(){
		cout << endl << "Todos os Funcionários: " << endl;
		for (unsigned int i = 0; i < funcionarios.size(); i++){
			cout << "Nome: " << funcionarios[i].get_Nome() << endl << "Salário: " << funcionarios[i].get_Salario() <<endl;
		}
	};
	
	//Lista funcionarios em periodos de experiencia
	void empresa::listar_func_periodo_exp(){
		cout << endl << "Funcionários em Experiência: " << endl;
		for (unsigned int i = 0; i < funcionarios.size(); i++){
			if ((data_atual) - *(funcionarios[i].get_data_de_admissao())<= 90)
				cout << "Nome: " << funcionarios[i].get_Nome()  << endl << "Salário: " << funcionarios[i].get_Salario() <<endl;
		}
	};