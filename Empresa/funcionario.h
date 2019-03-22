#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include "date.h"

using namespace std;

class funcionario{
	private:
		string nome;
		float salario;
		date data_de_admissao;
		string CPF;

	public:
		funcionario();
		
		//Métodos set, para inserção de dados
		void set_CPF(string cpf);
		void set_Nome(string nome_func);
		void set_Salario(float salario_func);
		void set_data_de_admissao(int dia, int mes, int ano);

		// Métodos get, para retorno de dados
		string get_CPF(); 
		string get_Nome();
		float get_Salario();
		date* get_data_de_admissao();

		//Alterar salario, o valor da alteracao é porcentagem
		void alterar_salario(float alteracao);

		//Sobrecarga de operadores
		bool operator==(funcionario func);
};

#endif