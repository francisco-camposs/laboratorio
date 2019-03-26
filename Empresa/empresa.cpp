#include "empresa.h"

// Função para inserir o nome da empresa.
// Recebe uma string como parâmetro.
void empresa::set_nome(string nome_empresa){
	nome = nome_empresa;
};

// Função para inserir o CNPJ da empresa.
// Recebe uma string como parâmetro, deve ser apenas números.
void empresa::set_CNPJ(string num_CNPJ){
	CNPJ = num_CNPJ;
};

// Função para retornar/acessar o nome da empresa.
// Retorna uma string com o nome da empresa.
string empresa::get_nome(){
	return nome;
};
// Função para retornar/acessar o CNPJ da empresa.
// Retorna uma string com o CNPJ da empresa.
string empresa::get_CNPJ(){
	return CNPJ;
};

// Função para aumentar o salário de todos os funcionários.
// Deve ser passado o parametro indicando a porcentagem do aumento.
void empresa::aumentar_salario_todos_funcionarios(float alteracao = 0){
	for (unsigned int i = 0; i < funcionarios.size(); i++){
		funcionarios[i].alterar_salario(alteracao);
	}
};

// Função para adicionar um novo funcionário.
// Devem ser passados os parâmetros nome, salário, CPF, o dia, mês e ano de admissão.
// A função retorna um booleano, verdadeiro após o funcionário ser adicionado caso ele não exista anteriormente e falso caso o contrário.
bool empresa::add_funcionario(string nome, float salario, string cpf, int dia_de_admissao, int mes_de_admissao, int ano_de_admissao){
	for (int i = 0; i < (int)funcionarios.size(); i++){
		if(cpf == funcionarios[i].get_CPF()){
			cout << "funcionario já existe, Não é possível adicionar." << endl;
			return false;		
		}
	}
	funcionario func;         //Variavel auxiliar para o uso do método push_back.
	func.set_Nome(nome);
	func.set_Salario(salario);
	func.set_CPF(cpf);
	func.set_data_de_admissao(dia_de_admissao, mes_de_admissao, ano_de_admissao);
	funcionarios.push_back(func);
	return true;
};


// Função para listar todos os funcionários
// Percorre todos os funcionários de uma determinada empresa de modo a imprimir o nome e salário de cada um.
void empresa::listar_func(){
	cout << endl << "Todos os Funcionários: " << endl;
	for (unsigned int i = 0; i < funcionarios.size(); i++){
		cout << "Nome: " << funcionarios[i].get_Nome() << endl << "Salário: " << funcionarios[i].get_Salario() <<endl;
	}
};

// Função para listar todos os funcionários em período de experiência de uma mesma empresa.
// Percorre todos os funcionários e lista apenas os contratados em menos de 90 dias.
void empresa::listar_func_periodo_exp(){
	cout << endl << "Funcionários em Experiência: " << endl;
	for (unsigned int i = 0; i < funcionarios.size(); i++){
		if ((data_atual) - *(funcionarios[i].get_data_de_admissao())<= 90)
			cout << "Nome: " << funcionarios[i].get_Nome()  << endl << "Salário: " << funcionarios[i].get_Salario() <<endl;
	}
};

//Cria uma empresa genérica.
empresa::empresa(){
	nome = "FACJ Industrias LTDA";
	CNPJ = "123456789101112";
}

// Método destrutor para liberar a memória alocada de forma dinâmica.
empresa::~empresa(){
	// Variável auxiliar para armazenar a quantidade de funcionários, que é igual ao tamanho do vetor.
	int tamanho = funcionarios.size();
	for (int i = 0; i < tamanho; i++){
		funcionarios.pop_back();
	}
}