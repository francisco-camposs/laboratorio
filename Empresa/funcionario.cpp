#include "funcionario.h"

// Método construtor para um funcionario genérico
funcionario::funcionario(){
	nome = "Jhon Doe";
	salario = 0.0;
};

// Método para inserir o nome do funcionario.
// Recebe uma string como parâmetro para o nome do funcionário
void funcionario::set_Nome(string nome_func){
	nome = nome_func;
};

// Método para inserir o valor do salário
// Recebe um float como parâmetro para o valor do salário
void funcionario::set_Salario(float salario_func){
	salario = salario_func;
};

// Método para inserir a data de admissão, deve ser colocada no formato de três inteiros na ordem de dia, mês e ano de admissão
// Recebe três inteiros como parâmetros, o dia, o mês e o ano de admissão do funcionário.
void funcionario::set_data_de_admissao(int dia, int mes, int ano){
	data_de_admissao.set_day(dia);
	data_de_admissao.set_month(mes);
	data_de_admissao.set_year(ano);
};

// Método para inserir o número do CPF.
// Recebe uma string como parâmetro.
void funcionario::set_CPF(string cpf){
	CPF = cpf;
};

// Método para retornar o nome do funcionário.
// Retorna uma string que armazena o nome do funcionário.
string funcionario::get_Nome(){
	return nome;
};


// Método para retornar o saláro do funcionário.
// Retorna um float que armazena o salário do funcionário.
float funcionario::get_Salario(){
	return salario;
};

// Método para retornar a data de admissão do funcionário.
// Retorna um ponteiro de date que que indica a posição de memória onde a data de admissão está armazenada.
date* funcionario::get_data_de_admissao(){
	// Variavél auxiliar para ser usada como retorno;
	date* data = new date;
	(*data).set_day(data_de_admissao.day());
	(*data).set_month(data_de_admissao.month());
	(*data).set_year(data_de_admissao.year());
	return data;
};

// Método para retornar o saláro do funcionário.
// Retorna um float que armazena o salário do funcionário.
string funcionario::get_CPF(){
	return CPF;
};

void funcionario::alterar_salario(float alteracao){
	salario = ((salario) * (alteracao/100+1));
}

bool funcionario::operator==(funcionario func){
	if (CPF == func.get_CPF())
		return true;
	else
		return false;
};