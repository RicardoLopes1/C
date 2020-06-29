//  o array componente está inicializado para -1 em todas suas casas

void BFS(int x){
	
	queue<int> fila;
	fila.push(x); // fila da nossa BFS
	
	componente[x] = valor; // colocamos o valor adequado aqui
	
	int atual = 0; // atual posição que estamos na fila
	
	while(!fila.empty()){ // Enquanto a fila não for vazia
		
		// vamos trabalhar com o primeiro da fila
		int v = fila.front();
		fila.pop(); // para movermos o elemento da fila
		
		for(int i = 0;i < (int)vizinhos[v].size();i++){
			
			int u = vizinhos[v][i];
			
			if(componente[u] == -1){
				
				// se u ainda não tiver sido visitado, o acrescentamos a fila
				componente[u] = componente[v];
				fila.push(u);
			}
		}
	}
}