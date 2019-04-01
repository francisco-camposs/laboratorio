
#ifndef _CONTROLE_H_
#define _CONTROLE_H_

#include <iostream>
#include <vector>
#include "empresa.h"

using namespace std;

// Classe de controle e gerenciamento de empresas.
class controle_empresas{
	private:
		// Vetor responsável por amazenar as empresas.
		vector<empresa*> Empresas;

	public:
		// Método para liberar a memória alocada dinamicamente.
		~controle_empresas();

		// Método para adicionar uma nova empresa.
		// Recebe como parâmetros uma string que é o CNPJ e uma que é o nome da empresa;
		void add_Empresa(string nome_empresa, string CNPJ);

		// Lista todas as empresas cadastrada no sistema.
		void listar_empresas();

		// Método para adicionar um novo funcionário a determinada empresa.
		// Recebe como parâmetros o CNPJ, além disso recebe uma string que será o nome, um número real como salário 
			//e a data de admissão sendo ela dividida em três inteiros, dia, mês e ano.;
		void add_funcionarios(string CNPJ, string nome, float salario, string cpf, int dia_de_admissao,
								int mes_de_admissao, int ano_de_admissao);

		// Lista todos os funcionários de uma empresa cadastrada no sistema.
		// Recebe como parâmetro o CNPJ.
		void listar_funcionarios_empresa(string CNPJ);

		// Lista todos os funcionários em período de experiência de uma empresa cadastrada no sistema.
		// Recebe como parâmetro o CNPJ.
		void listar_funcionarios_em_experiencia(string CNPJ);

		// Aumenta o salário de todos os funcionários de uma empresa.
		// Recebe como parâmetro o CNPJ e o valor do aumento em porcentagem.
		void alterar_salario_funcionario(string CNPJ, float aumento);
};

#endif