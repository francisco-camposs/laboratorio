
#ifndef _CONTROLE_H_
#define _CONTROLE_H_

#include <iostream>
#include <vector>
#include "empresa.h"

using namespace std;

class controle_empresas{
	private:
		vector<empresa*> Empresas;

	public:
		~controle_empresas();

		void add_Empresa(string nome_empresa, string CNPJ);
		void listar_empresas();
		void add_funcionarios(string CNPJ, string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao);
		void listar_funcionarios_empresa(string CNPJ);
		void listar_funcionarios_em_experiencia(string CNPJ);
		void alterar_salario_funcionario(string CNPJ, float aumento);
};

#endif