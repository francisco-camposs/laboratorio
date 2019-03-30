#ifndef _EMPRESA_H_
#define _EMPRESA_H_
#include <iostream>
#include <vector>
#include "date.h"
#include "funcionario.h"


class empresa {
	private:
		// Variável que armazena o nome da empresa
		string nome;
		// Variável que armazena o CNPJ da empresa
		string CNPJ;
		//Vector responsável por armazenar os funcionários de uma mesma empresa.
		vector<funcionario *> funcionarios;


	public:
		// Variável global para armazenar a data atual, utilizada para calcular o tempo de admissão;
		static date data_atual;

		// Método para criar uma empresa genérica assim que um objeto é instanciado.
		empresa();
		// Método para memória alocada dinamicamente criada para armazenar os funcionários.
		~empresa();

        // Métodos set, para inserção de dados
		void set_nome(string nome_empresa);
        // Métodos get, para retorno de dados
		void set_CNPJ(string num_CNPJ);

        // Método para retornar o nome de uma empresa.
		string get_nome();
        // Métodos para retornar o CNPJ de uma empresa.
		string get_CNPJ();

		//Método para aumentar o salário de todos os funcionários em uma certa porcentagem que deve ser passada como parâmetro.
		void aumentar_salario_todos_funcionarios(float alteracao);

		// Método para adicionar um funcionário a uma empresa, deve receber o nome, o CPF, e o dia, mês e ano de admissão para compor a data.
		bool add_funcionario(string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao);

		// Método para listar todos os funcionários de uma empresa.
		void listar_func();
		
		// Método para listar todos os funcionários em período de experiência.
		void listar_func_periodo_exp();
};

#endif