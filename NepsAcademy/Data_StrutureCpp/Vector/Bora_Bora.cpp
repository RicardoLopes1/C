// Se 12 descartada, inverte a direção do jogo
// Se 11 descartado, próximo jogador perde a vez.
// Se 7 descartado, próximo jogador pega 2 cartas e perde a vez.
// Se 1 descartado, próximo jogador pega 1 carta e perde a vez.
// P = número de jogadores
// M = número de cartas para cada jogador
// N = número de cartas no baralho
// C < D < H < S
// 2 2 10 1 D 7 D 1 S 3 C 13 D 1 S 5 H 12 D 7 S 2 C
#include <bits/stdc++.h>
using namespace std;

int vfind(vector<int> v, int n);

int main(){
	int p, m, n, x;
	char s; 
	// ‘C’ (Paus - Clubs), ‘D’ (Ouros - Diamonds), ‘H’ (Copas - Hearts) ou ‘S’ (Espadas - Spades).
	// C < D < H < S
	while(true){
		cin >> p >> m >> n;
		if(p == 0) break;
		
		queue<pair<int,char>> cards;
		vector<pair<int,char>> players[p];
		
		for(int i = 0; i < n; i++){
			cin >> x >> s;
			cards.push(make_pair(x, s));
		}

		for( int i = 0; i<p ; i++){
			for( int j = 0 ; j<m ; j++ ){
				x = cards.front().first;
				s = cards.front().second;
				cards.pop();
				players[i].push_back(make_pair(x, s));
			}
		}
		for( int i=0 ; i<p ; i++ ){
			sort(players[i].rbegin(), players[i].rend());
		}
		cout << "fim\n";


	}
	return 0;
}

