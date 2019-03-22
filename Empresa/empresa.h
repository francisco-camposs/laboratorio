#include "funcionario.h"
#include <iostream>
#include <vector>

class empresa {
	private:
		string nome;
		string CNPJ;
		vector<funcionario> funcionarios;

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
		void alterar_salario(float alteracao);

		//Listar todos osfuncionarios
		void listar_func();
		
		//Lista funcionarios em periodos de experiencia
		void listar_func_periodo_exp();


};
