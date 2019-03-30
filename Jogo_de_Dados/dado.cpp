#include "dado.h"

	dado::dado(int numero):numero_lados(numero),rd(),gen(rd()),dis(1,numero_lados){
	};

	int dado::rolar(){
		return round(dis(gen));
	};
