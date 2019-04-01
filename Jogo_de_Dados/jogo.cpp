#include "jogo.h"

// 		// Método responsável por listar todos os jogadores listados.
// 		void listar_jogadores();

// 		// Método responsável por imprimir o jogador vencedor caso só reste um deles.
// 		void imprimir_vencedor();

// 		// Método responsável por decidir o jogador vencedor no caso em que todos os jogadores os jogadores parem naquela rodada.
// 		void decidir_vencedor();
	
	// Valor objetivo padrão.
	int Jogo::objetivo = 30;

	// percorre o vetor de modo a liberar a memória alocada de forma dinâmica.
	Jogo::~Jogo(){
		int tamanho = Jogadores.size();
		for (;tamanho>0;tamanho--){
			delete Jogadores[tamanho-1];
			Jogadores.pop_back();
		}
	};

	// Método responsável por atribuir um valor qualquer como objetivo.
	void Jogo::add_objetivo(int numero){
		objetivo = numero;
	};

	// Método respónsavel por adcionar um novo jogador
 	// Recebe o nome do novo jogador como parâmetro
	void Jogo::add_jogador(string nome){
		int tamanho = Jogadores.size();
		// Percorre o vetor dos jogadores atuais de modo a impedir que jogadores com nome iguais sejam inseridos.
		for (int i = 0; i < tamanho; i++){
			if (nome == Jogadores[i]->get_Nome()){
				cout << "Já existe um jogador com esse nome, tente outro." << endl;
				return;
			}
		}
		jogador *new_player = new jogador;
		new_player->set_Nome(nome);
		Jogadores.push_back(new_player);
	};

	// Cria um loop de modo a se poder adicionar mais jogadores.
	void Jogo::iniciar_jogo(){
		cout << "Comece inserindo os Jogadores." << endl;
		//Variável auxiliar responsável por armazenar o nome dado ao novo jogador.
		string nome;
		// Variável responsável por decidir se serão adicionador novos jogadores.
		int numero = 1;
		// Loop para chamar o método de add_jogador um numero indefinido de vezes.
		while (numero!= 0){
			cout << "Digite o nome do jogador: ";
			cin >> nome;
			add_jogador(nome);
			cout << "Para adicionar outro jogador digite 1:\nPara inicar o jogo digite 0." << endl;
			cin >> numero;
			nome = "";
		}
	};

	//Responsável por gerenciar o jogo.
	void Jogo::jogar(){
		// Armazena o número de jogadores que ainda não ultrapassarm o objetivo.
		int numero_de_jogadores_ativos = Jogadores.size();
		// Armazena o número total de jogadores.
		int numero_de_jogadores = Jogadores.size();
		// Armazena a soma das decisões por rodada.
		// Caso ela seja zero quer dizer que todos os jogadores deixaram de jogar essa rodada.
		int decisoes = 0;
		int decisao;
		// imprime a pontuação que é o objetivo.
		cout << "objetivo: " << objetivo << endl;
		do{
			//Percorre o vetor que armazena os jogadores controlando a rodada.
			for (int i = 0; i < numero_de_jogadores; i++){
				// Caso onde só resta um jogador que não ultrapassou a pontuação objetivo.
				if (numero_de_jogadores_ativos == 1){
					imprimir_vencedor();
					return;
				}
				// Caso o jogador não tenha ultrapassado a pontuação limite.
				if (Jogadores[i]->get_Status()){
					cout << Jogadores[i]->get_Nome() << " deseja jogar essa rodada? \nDigite 1 para jogar e 0 para passar essa rodada: " << endl;
					cin >> decisao;
					decisoes += decisao;
					if ((bool)decisao){
						// Executa a rolagem de dados, de modo a aumentar a pontuação objetivo.
						jogar_rodada((bool)decisao, Jogadores[i]);
						// Eliminar os jogadores que excedem a pontuação objetivo.
						if (Jogadores[i]->get_Pontuacao() > objetivo){
							cout << "Jogador excedeu a pontuação limite e está desclassificado." << endl;
							Jogadores[i]->set_Status(false);
							numero_de_jogadores_ativos -= 1;
						}
						// Dá a vitória caso o jogador obetenha a pontuação objetivo.
						if (Jogadores[i]->get_Pontuacao() == objetivo){
							cout << Jogadores[i]->get_Nome() << "É o vencedor." << endl;
							return;
						}
					}	
				}
				// Caso o jogador tenha ultrapassado a pontuação limite.
				else{
					cout << Jogadores[i]->get_Nome() << " excedeu a pontuação limite e está desclassificado." << endl;
				}			
			}
			// Caso todos os jogadores tenham desistido ele é o responsável por selecionar o vencedor ou gerar o empate.
			if (decisoes == 0){
				decidir_vencedor();
				return;
			}
			// Zerar a soma das decisões após o final da rodada.
			decisoes = 0;
			// Limpa o terminal.
			system("clear");
			// imprime a pontuação que é o objetivo.
			cout << "objetivo: " << objetivo << endl;
			// Listar todos os jogadores, independetemente de desclassificados ou não.
			listar_jogadores();
		}while(true);
	};


	// Método responsável por rolar os dados alterando a pontuação de cada jogador.
	// Recebe como parâmetros a decisão do jogador, de rolar ou não, e um vetor para o jogador que está rolando os dados.
	void Jogo::jogar_rodada(bool jogada, jogador* player){
		if (jogada){
			player->Aumentar_Pontuacao(dado_1.rolar());
			player->Aumentar_Pontuacao(dado_2.rolar());
		}
	};

	// Listar todos os jogadores, independetemente de desclassificados ou não.
	void Jogo::listar_jogadores(){
		int tamanho = Jogadores.size();
		// Percorre todo o vetor para imprimir cada elemento dele.
		for (int i = 0;i < tamanho; i++){
			cout << *(Jogadores[i]);
		}
	};

	// Imprime o único jogador com status ativo.
	void Jogo::imprimir_vencedor(){
		int tamanho =Jogadores.size();
		for (int i = 0; i < tamanho; i++){
			if (Jogadores[i]->get_Status()){
				cout << "O vencedor é: " << endl << *Jogadores[i];
				return;
			}
		}
	};

	void Jogo::decidir_vencedor(){
		// Variável auxiliar responsável por armazenar o indice do vencedor
		int indice_do_vencedor = 0;
		// Número total de jogadores.
		int tamanho = Jogadores.size();
		// Loop que verifica se há empate.
		for (int i = 0; i < tamanho; i++){
			// Caso haja número diferentes, ele para o loop e começa a procurar o vencedor.
			if(Jogadores[0]->get_Pontuacao() != Jogadores[i]->get_Pontuacao())
				break;
			// Reinicia o jogo e caso de empate.
			if(i == tamanho-1){
				cout << "Houve um empate, iniciaremos o jogo novamente." << endl;
				for(int j = 0; j < tamanho; j++){
					Jogadores[i]->set_Pontuacao(0);
					Jogadores.set_Status(true);
				}
				jogar();
				return;
			}
		}
		// Loop que busca o vencedor caso todos os jogadores tenham desistido e não tenha tido um empate. 
		for (int i = 0; i < tamanho; i++){
			// Verifica se o jogador padrão, o inicial tem status ativo ou não, caso contrário ele altera para o jogador seguinte.
			if(!Jogadores[indice_do_vencedor]->get_Status() && indice_do_vencedor < tamanho-1){
				indice_do_vencedor +=1;
			}
			// seleciona o indice do jogador ativo mais próximo do valor objetivo.
			if (Jogadores[indice_do_vencedor]->get_Pontuacao() < Jogadores[i]->get_Pontuacao() &&  Jogadores[i]->get_Status()){
				indice_do_vencedor = i;
			}
		}
		cout << "O vencedor é:" << endl <<  *(Jogadores[indice_do_vencedor]);
		return;
	};