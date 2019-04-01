#include <iostream>
#include <string>

using namespace std;

class jogador {
	private:
		// Nome do jogador.
		string Nome;
		// Pontuação do jogador.
		int Pontuacao;
		// Status do jogador, se está apto a jogar ou não.
		bool Status;

	public:
		// Método construtor padrão.
		jogador();

		// Método set para a atribuição de um valor especifico ao atributo Nome.
		void set_Nome(string nome);

		// Método set para a atribuição de um valor especifico ao atributo Pontuacao.
		void set_Status(int resposta);

		// Método set para a atribuição de um valor especifico ao atributo Status.
		void set_Pontuacao(int numero);

		// Método get para recuperar o valor do atributo Nome.
		// retorna um valor do tipo string.
		string get_Nome();

		// Método get para recuperar o valor do atributo Pontuacao.
		// retorna um valor do tipo int.	
		int get_Pontuacao();

		// Método get para recuperar o valor do atributo Status.
		// retorna um valor do tipo bool.		
		bool get_Status();

		// Método para aumentar a pontuação do jogador.
		// Recebe um inteiro como parâmetro.
		void Aumentar_Pontuacao(int valor);

		// Sobrecarga do operador de extração.
		friend ostream& operator<<(ostream &o, jogador &Jogador);
};