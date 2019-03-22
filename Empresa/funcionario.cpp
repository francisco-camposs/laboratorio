#include "funcionario.h"

	funcionario::funcionario(){
		nome = "Jhon Doe";
		salario = 0.0;
	};

	/**************************************************
	Métodos set da classe funcionários
	***************************************************/
	void funcionario::set_Nome(string nome_func){
		nome = nome_func;
	};

	void funcionario::set_Salario(float salario_func){
		salario = salario_func;
	};

	void funcionario::set_data_de_admissao(int dia, int mes, int ano){
		data_de_admissao.set_day(dia);
		data_de_admissao.set_month(mes);
		data_de_admissao.set_year(ano);
	};

	void funcionario::set_CPF(string cpf){
		CPF = cpf;
	};


	/**************************************************
	Métodos get para a classe Funcionarios
	***************************************************/
	string funcionario::get_Nome(){
		return nome;
	};

	float funcionario::get_Salario(){
		return salario;
	};

	date* funcionario::get_data_de_admissao(){
		date* data = new date;
		(*data).set_day(data_de_admissao.day());
		(*data).set_month(data_de_admissao.month());
		(*data).set_year(data_de_admissao.year());
		return data;
	};

	string funcionario::get_CPF(){
		return CPF;
	};

	/**************************************************
	Métodos para alterar os dados dos funcionarios
	***************************************************/

	void funcionario::alterar_salario(float alteracao){
		salario = ((salario) * (alteracao/100+1));
	}

	/**************************************************
	Sobrecarga de Operadores
	***************************************************/
	bool funcionario::operator==(funcionario func){
		if (CPF == func.get_CPF())
			return true;
		else
			return false;
	};