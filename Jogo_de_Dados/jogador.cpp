#include "jogador.h" 

	// Método construtor padrão.
	jogador::jogador():Nome("Jhon Doe"),Pontuacao(0),Status(true){
	};

	// Método set para a atribuição de um valor especifico ao atributo Nome.
	void jogador::set_Nome(string nome){
		Nome = nome;
	};

	// Método set para a atribuição de um valor especifico ao atributo Pontuacao.
	void jogador::set_Status(int resposta){
		Status = (bool)resposta;
	};

	// Método set para a atribuição de um valor especifico ao atributo Status.
	void jogador::set_Pontuacao(int numero){
		Pontuacao = numero;
	};

	// Método get para recuperar o valor do atributo Nome.
	// retorna um valor do tipo string.
	string jogador::get_Nome(){
		return Nome;
	};

	// Método get para recuperar o valor do atributo Pontuacao.
	// retorna um valor do tipo int.
	int jogador::get_Pontuacao(){
		return Pontuacao;
	};

	// Método get para recuperar o valor do atributo Status.
	// retorna um valor do tipo bool.
	bool jogador::get_Status(){
		return Status;
	};

	// Método para aumentar a pontuação do jogador.
	// Recebe um inteiro como parâmetro.
	void jogador::Aumentar_Pontuacao(int valor){
		Pontuacao += valor;
	};

	// Sobrecarga do operador de extração.
	ostream& operator<< (ostream &o, jogador &Jogador){
		o << "Nome: " << Jogador.get_Nome() << "\n" << "Pontos: " << Jogador.get_Pontuacao() << "\n";
		return o;
	};
