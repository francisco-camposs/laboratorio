#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include "date.h"

using namespace std;

class funcionario{
	private:
		// Armazena o Nome do funcionário
		string nome;
		// Armazena o salário de um funcionário.
		float salario;
		// Armazena a data de admissão de um funcionário.
		date data_de_admissao;
		// Armazena o CPF de um funcionário.
		string CPF;

	public:
		funcionario();
		
		// Método set para a atribuição de valores especificos ao atributo
		// Recebem como parâmetro um valor da classe string
		void set_CPF(string cpf);

		// Método set para a atribuição de valores especificos ao atributo
		// Recebem como parâmetro um valor da classe string
		void set_Nome(string nome_func);

		// Método set para a atribuição de valores especificos ao atributo
		// Recebem como parâmetro um valor do tipo float
		void set_Salario(float salario_func);

		// Método set para a atribuição de valores especificos ao atributo
		// Recebem como parâmetro três valores inteiros.
		void set_data_de_admissao(int dia, int mes, int ano);


		// Métodos get para recuperar o valor do atributo CPF.
		// Retorna um objeto da classe string. 
		string get_CPF();

		// Métodos get para recuperar o valor do atributo Nome.
		// Retorna um objeto da classe string.
		string get_Nome();

		// Métodos get para recuperar o valor do atributo Salario.
		// Retorna um valor do tipo float.
		float get_Salario();

		// Métodos get para recuperar o valor do atributo data de admissão.
		// Retorna um ponteiro de classe date.
		date* get_data_de_admissao();



		// Altera o salário de todos os funcionários de uma empresa.
		// Recebe um floa como parâmetro
		void alterar_salario(float alteracao);

		//Sobrecarga de operador ==.
		bool operator==(funcionario func);
};

#endif