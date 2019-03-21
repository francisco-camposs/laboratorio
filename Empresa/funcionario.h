#include <iostream>

using namespace std;

class funcionario{
	private:
		string nome;
		float salario;
		// date data_de_admissao;

	public:
	funcionario();
	~funcionario();

	//Métodos set, para inserção de dados
	void set_Nome(string nome_func);
	void set_Salario(float salario_func);
	// void set_data_de_admissao(date data);

	// Métodos get, para retorno de dados
	string get_Nome();
	float get_Salario();
	// date get_data_de_admissao();

	//Alterar salario, o valor da alteracao é porcentagem
	void alterar_salario(float alteracao);

	//Sobrecarga de operadores
		//
		//

};