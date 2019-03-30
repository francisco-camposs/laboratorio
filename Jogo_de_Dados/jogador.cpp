#include "jogador.h" 

	jogador::jogador():Nome("Jhon Doe"),Pontuacao(0){
	};

	void jogador::set_Nome(string nome){
		Nome = nome;
	};

	string jogador::get_Nome(){
		return Nome;
	};
	
	int jogador::get_Pontuacao(){
		return Pontuacao;
	};

	void jogador::Aumentar_Pontuacao(int valor){
		Pontuacao += valor;
	};

	ostream& operator<< (ostream &o, jogador &Jogador){
		o << "Nome: " << Jogador.get_Nome() << "\n" << "Pontos: " << Jogador.get_Pontuacao() << "\n";
		return o;
	};
