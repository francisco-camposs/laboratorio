#include "dado.h"
	
	// determina os atributos das máquinas da geração de números aleatórios.
	// Determina o intervalo de inteiros que o programa simula, especificamente um dado de seis lados.
	dado::dado():numero_lados(6),rd(),gen(rd()),dis(1,6){
	};

	// Retorna um valor randômico para simular a rolagem de um dado.
	int dado::rolar(){
		return round(dis(gen));
	};
