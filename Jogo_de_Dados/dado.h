#include <iostream>
#include <random>

using namespace std;

class dado{
	private:
		int numero_lados;
		random_device rd;
		default_random_engine gen;
		uniform_int_distribution<> dis;

	public:
		dado(int numero);
		int rolar();
};