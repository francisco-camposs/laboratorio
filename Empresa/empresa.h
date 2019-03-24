#ifndef _EMPRESA_H_
#define _EMPRESA_H_
#include <iostream>
#include <vector>
#include "date.h"
#include "funcionario.h"

class empresa {
	private:
		string nome;
		string CNPJ;
		vector<funcionario> funcionarios;

	public:
			static date data_atual;

	public:
		//Métodos set, para inserção de dados
		void set_nome(string nome_empresa);
		void set_CNPJ(string num_CNPJ);

		//Métodos get, para retorno de dados
		string get_nome();
		string get_CNPJ();

		/************************************
		métodos de manipulação de Funcionarios
		************************************/
		//Aumenta o salario de todos os funcionarios
		void aumentar_salario_todos_funcionarios(float alteracao);

		bool add_funcionario(string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao);

		//Listar todos osfuncionarios
		void listar_func();
		
		//Lista funcionarios em periodos de experiencia
		void listar_func_periodo_exp();


};

#endif