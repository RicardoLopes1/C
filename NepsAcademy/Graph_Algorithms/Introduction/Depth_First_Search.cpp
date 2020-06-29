// componente[i] se trata da componente do vértice i.
// Inicialmente, componente[i] = -1 para todo vértice.
// Faremos a DFS como sendo uma função recursiva.
// Antes de chamar a DFS no primeiro nó, definimos sua componente

void DFS(int x){ // vértice com o qual vamos trabalhar
	
	// usaremos lista de adjacência
	for(int i = 0;i < (int)vizinhos[x].size();i++){ // para todo V vizinho a X
		
		int v = vizinhos[x][i];
		
		if(componente[v] == -1){
			componente[v] = componente[x];
			DFS(v);
		}
	}
}
