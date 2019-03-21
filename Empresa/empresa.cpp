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
	void empresa::alterar_salario(float alteracao){

	};

	//Listar todos osfuncionarios
	void empresa::listar_func(){

	};
	
	//Lista funcionarios em periodos de experiencia
	void empresa::listar_func_periodo_exp(){

	};