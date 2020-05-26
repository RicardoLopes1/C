// Se 12 descartada, inverte a direção do jogo
// Se 7 descartado, próximo jogador pega 2 cartas e perde a vez.
// Se 1 descartado, próximo jogador pega 1 carta e perde a vez.
// Se 11 descartado, próximo jogador perde a vez.

#include <iostream>
#include <vector>

using namespace std;

int vfind(vector<int> v, int n);
int ascToInt(char c);

int main(){
	vector<int> players; // create vector
	vector<int> winners; // create vector
	int p, m, n; 
	int w, aux, r=1;
	int nextp = 0;
	char cards[2];
	
	
	do{
		cin >> p >> m >> n;
		if(p == 0) break;
		players.resize(p,m);
		
		for(int i=0; i<n; i++){
			cin >> cards[0] >> cards[1];
			aux = ascToInt(cards[0]);

			switch(aux){
			case 1:
				players[nextp] += 1;
				break;
			
			case 7:
				players[nextp] += 2;
				break;

			case 11:
				break;

			case 12:	
				r *= -1;
				break;

			default:
				players[nextp] -= 1;
				break;
			}
			nextp = (nextp+r) % p;
			
		}
		
		w = vfind(players, 0) + 1;
		winners.push_back(w);
		players.clear();
	}while(p != 0);

	for(int i=0; i<winners.size()-1; i++)
		cout << winners[i] << endl;

	return 0;
}

//funcs
int vfind(vector<int> v, int n){
	for(int i=0; i<v.size(); i++){
		if(v[i] == n) return i;
	}
	return -1;
}

int ascToInt(char c){
	return c - '0';
}