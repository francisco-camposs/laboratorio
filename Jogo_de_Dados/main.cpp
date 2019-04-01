#include <iostream>
#include "jogo.h"

using namespace std;

int main (){
	cout << "Bem_vindos ao jogo dos Dados Aleatórios" << endl;
	Jogo game;
	game.iniciar_jogo();
	game.jogar();
	return 0;
}