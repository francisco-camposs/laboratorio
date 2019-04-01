#include "controle.h" 

// Método para adicionar uma nova empresa.
// Recebe como parâmetros uma string que é o CNPJ e uma que é o nome da empresa;
void controle_empresas::add_Empresa(string nome_empresa, string CNPJ){
	// Variável que armazena a quantidade de empresas no instante que a função é chamada.
	int tamanho = Empresas.size();
	// Verifica se a empresa já existe.
	for (int i = 0; i < tamanho; i++){
		if(CNPJ == Empresas[i]->get_CNPJ())
			cout << "Empresa já existe: " << endl;
		return;
	}
	// Cria um ponteiro para a nova empresa e adiciona o ponteiro ao vetor de empresas.
	empresa  *Empresa_aux = new empresa;
	Empresa_aux->set_nome(nome_empresa);
	Empresa_aux->set_CNPJ(CNPJ);
	Empresas.push_back(Empresa_aux);
};

// Lista todas as empresas cadastrada no sistema.
void controle_empresas::listar_empresas(){
	// Variável que armazena a quantidade de empresas no instante que a função é chamada.
	int tam = Empresas.size();
	// Percorre o vetor imprimindo o nome e o CNPJ de cada empresa.
	for (int i = 0; i < tam; i++){
		cout << "Nome:" <<Empresas[i]->get_nome() << endl << "CNPJ: " << Empresas[i]->get_CNPJ() << endl;
	}
};

// Método para adicionar um novo funcionário a determinada empresa.
		// Recebe como parâmetros o CNPJ, além disso recebe uma string que será o nome, um número real como salário 
			//e a data de admissão sendo ela dividida em três inteiros, dia, mês e ano.;
void controle_empresas::add_funcionarios(string CNPJ, string nome, float salario, string cpf,
										 int dia_de_admissao, int mes_de_admissao, int ano_de_admissao){
	// Variável que armazena a quantidade de empresas no instante que a função é chamada.
	int tam = Empresas.size();
	// Busca o CNPJ da empresa e caso o encontre chama a função add_funcionario daquela empresa.
	for (int i = 0; i < tam; i++){
		// Verifica se é a empresa correta.
		if (CNPJ == Empresas[i]->get_CNPJ()){
			if (Empresas[i]->add_funcionario(nome,salario,cpf,dia_de_admissao,mes_de_admissao,ano_de_admissao)){
				cout << "Funcionario adicionado com sucesso." << endl;
				return;
			}
			break;
		}
	}
	// Caso a empresa não tenha sido encontrada imprime essa mensagem.
	cout << "Essa empresa não está cadastrada" << endl;
};

// Lista todos os funcionários de uma empresa cadastrada no sistema.
// Recebe como parâmetro o CNPJ.
void controle_empresas::listar_funcionarios_empresa(string CNPJ){
	// Variável que armazena a quantidade de empresas no instante que a função é chamada.
	int tam = Empresas.size();
	// Percorre o vetor buscando o CNPJ Correto.
	for (int i = 0; i < tam; i++){
		// Se for o CNPJ correto chama o método listar_func da classe empresa.
		if (CNPJ == Empresas[i]->get_CNPJ()){
			Empresas[i]->listar_func();
		return;
		}
	}
	// Caso a empresa não esteja no vetor ele imprime essa mensagem.
	cout << "Essa empresa não está cadastrada" << endl;
};
// Lista todos os funcionários em período de experiência de uma empresa cadastrada no sistema.
// Recebe como parâmetro o CNPJ.
void controle_empresas::listar_funcionarios_em_experiencia(string CNPJ){
	// Variável que armazena a quantidade de empresas no instante que a função é chamada.
	int tam = Empresas.size();
	// Percorre o vetor buscando o CNPJ Correto.
	for (int i = 0; i < tam; i++){
		if (CNPJ == Empresas[i]->get_CNPJ()){
			// Se for o CNPJ correto chama o método >listar_func_periodo_exp da classe empresa, listando os funcionários em período de experiência.
			Empresas[i]->listar_func_periodo_exp();
		return;
		}
	}
	// Caso a empresa não esteja no vetor ele imprime essa mensagem.
	cout << "Essa empresa não está cadastrada" << endl;
};

// Aumenta o salário de todos os funcionários de uma empresa.
// Recebe como parâmetro o CNPJ e o valor do aumento em porcentagem.
void controle_empresas::alterar_salario_funcionario(string CNPJ, float aumento){
	// Variável que armazena a quantidade de empresas no instante que a função é chamada.
	int tam = Empresas.size();
	// Percorre o vetor buscando o CNPJ Correto.
	for (int i = 0; i < tam; i++){
		// Se for o CNPJ correto chama o método aumentar_salario_todos_funcionarios da empresa.
		if (CNPJ == Empresas[i]->get_CNPJ()){
			Empresas[i]->aumentar_salario_todos_funcionarios(aumento);
			return;
		}
	}
	// Caso a empresa não esteja no vetor ele imprime essa mensagem.
	cout << "Essa empresa não está cadastrada" << endl;
};

// Método para liberar a memória alocada dinamicamente.
controle_empresas::~controle_empresas(){
	// Variável que armazena a quantidade de empresas no instante que a função é chamada.
	int tamanho = Empresas.size();
	// Percorre o vetor buscando o CNPJ Correto.
	for (int i = 0; tamanho > i; tamanho--){
		// Libera a alocação dinâmica iniciando do final.
		delete Empresas[tamanho - 1];
		Empresas.pop_back();
	}
};