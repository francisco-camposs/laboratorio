#include <iostream>
#include <random>

using namespace std;

// Classe que cria os dados do jogo
class dado{
	private:
		// Numero de lados do dado.
		int numero_lados;
		// Instancia o gerador de números pseudo randômicos não-determinístico.
		random_device rd;
		default_random_engine gen;
		// Gera uma distribuição pseudo-randômica de números inteiros.
		uniform_int_distribution<> dis;

	public:
		// Método contrutor.
		dado();
		// Método para a rolagem do dado.
		int rolar();
};