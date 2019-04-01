#include <vector>
#include "dado.h"
#include "jogador.h"

using namespace std;

//Classe responsável por iniciar o jogo e armazenar os dados
class Jogo {
	private:
		// Primeiro dado a ser jogado.
		dado dado_1;
		// Segundo dado a ser jogado.
		dado dado_2;
		// Armazena todos os jogadores
		vector<jogador *> Jogadores;

	public:
		// Armazena o número que se deseja alcançar.
		static int objetivo;

	public:
		// Método para liberar a memória alocada dinamicamente
		~Jogo();

		// Método responsável por atribuir um valor qualquer como objetivo
		void add_objetivo(int numero);

		// Método respónsavel por adcionar um novo jogador
		// Recebe o nome do novo jogador como parâmetro
		void add_jogador(string nome);

		// Método responsável por chamar a função de adicionar jogadores, de modo a se poder adicionar vários jogadores de uma única vez
		void iniciar_jogo();

		// Método que executa o jogo.
		// Responsável por gerenciar as rodadas e organizar o jogo, além de chamar métodos auxiliares para casos de empates.
		void jogar();

		// Método respónsavel por adcionar um novo jogador.
		// Recebe o nome do novo jogador como parâmetro.
		void jogar_rodada(bool jogada, jogador* player);

		// Método responsável por listar todos os jogadores listados.
		void listar_jogadores();

		// Método responsável por imprimir o jogador vencedor caso só reste um deles.
		void imprimir_vencedor();

		// Método responsável por decidir o jogador vencedor no caso em que todos os jogadores os jogadores parem naquela rodada.
		void decidir_vencedor();

};