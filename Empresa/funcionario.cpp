#include "funcionario.h"

	funcionario::funcionario(){
		nome = "Jhon Doe";
		salario = 0.0;
	};

	//Métodos set, para inserção de dados
	void funcionario::set_Nome(string nome_func){
		nome = nome_func;
	};

	void funcionario::set_Salario(float salario_func){
		salario = salario_func;
	};

	// void funcionario::set_data_de_admissao(date data){
	//};


	// Métodos get, para retorno de dados
	string funcionario::get_Nome(){
		return nome;
	};

	float funcionario::get_Salario(){
		return salario;
	};

	// date funcionario::get_data_de_admissao(){
		//return ;
	//};

	void alterar_salario(float alteracao){
		
	}