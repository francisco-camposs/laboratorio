#include <iostream>
#include <string>

using namespace std;

class jogador {
	private:
		string Nome;
		int Pontuacao;

	public:
		jogador();

		void set_Nome(string nome);

		string get_Nome();
		int get_Pontuacao();

		void Aumentar_Pontuacao(int valor);

		friend ostream& operator<<(ostream &o, jogador &Jogador);
};