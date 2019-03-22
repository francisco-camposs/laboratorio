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
			*(funcionarios[i]).alterar_salario(alteracao);
		}
	};

	void empresa::add_funcionario(string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao){
		cout << funcionarios.size() << endl;
		cout << funcionarios.size() << endl;
		for (int i = 0; i < (int)funcionarios.size(); i++){
			cout << "entrou no for" << endl;
			if(cpf == *(funcionarios[i]).get_CPF()){
				cout << i << endl;
				cout << "funcionario já existe, Não é possível adicionar." << endl;
				return;			
			}
		}
		cout << "saiu aqui" << endl;
		funcionarios.push_back (new funcionario*);
		// funcionarios[funcionarios.size()].set_Nome(nome);
		// funcionarios[funcionarios.size()].set_Salario(salario);
		// funcionarios[funcionarios.size()].set_CPF(cpf);
		// funcionarios[funcionarios.size()].set_data_de_admissao(dia_de_admissao, mes_de_admissao, ano_de_admissao);
	};


	//Listar todos osfuncionarios
	void empresa::listar_func(){
		for (unsigned int i = 0; i < funcionarios.size(); i++){
			cout << "Funcionario " << i << ":"<< endl;
			cout << *(funcionarios[i]).get_Nome() << endl << *(funcionarios[i]).get_Salario() <<endl;
		}
	};
	
	//Lista funcionarios em periodos de experiencia
	void empresa::listar_func_periodo_exp(){
		for (unsigned int i = 0; i < funcionarios.size(); i++){
			if ((data_atual) - *(*(funcionarios[i]).get_data_de_admissao())<= 90);
				cout << *(funcionarios[i]).get_Nome() << endl << *(funcionarios[i]).get_Salario() <<endl;
		}
	};