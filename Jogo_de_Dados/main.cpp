#include <iostream>
#include "jogador.h"
#include "dado.h"

using namespace std;

int main (){

	dado conjunto(6);
	jogador cleiton;
	cleiton.set_Nome("Cleitinho");
	cout << cleiton;
	cleiton.Aumentar_Pontuacao(conjunto.rolar());
	cout << cleiton;
	cleiton.Aumentar_Pontuacao(conjunto.rolar());
	cout << cleiton;
	cleiton.Aumentar_Pontuacao(conjunto.rolar());
	cout << cleiton;
	cleiton.Aumentar_Pontuacao(conjunto.rolar());
	cout << cleiton;

	return 0;
}