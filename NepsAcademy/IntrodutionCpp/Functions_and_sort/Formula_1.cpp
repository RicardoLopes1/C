#include <iostream>
#include <algorithm>
using namespace std;

struct Pilot{
	int id, point=0;
	int order[100];
};
/* segundo
3 10 1 2 3 4 5 6 7 8 9 10 10 1 2 3 4 5 6 7 8 9 9 10 1 2 3 4 5 6 7 8 2 5 5 4 3 2 1 3 10 5 1
*/
/* primeiro
1 3 3 2 1 3 3 5 3 2 3 5 3 1 3 1 1 1
*/
/*terceiro
2 4 1 3 4 2 4 1 3 2 2 3 3 2 1 3 5 4 2
*/


int funcOrder(Pilot a, Pilot b);
int funcPoint(Pilot a, Pilot b);	

int main(){
   	while(1){
	    int g, p, ddot; 
	    int aux;
	    

	    cin >> g >> p;
	    if(g ==0 and p ==0) break;
	    Pilot v[p];
	    

	    for(int j=0; j<p; j++){
		    v[j].id = j+1;
		}
		
		for(int i=0; i<g; i++){
			for(int j=0; j<p; j++){
				cin >> aux;
				v[j].order[i] = aux;
			}
		}
		for(int i=0; i<p; i++)
			sort(v[i].order, v[i].order + g);
		
	    int s, k;
	    cin >> s;

	    for(int i=0; i<s; i++){
		    	cin >> k;

		    	for(int j=0; j<k; j++){
		    		cin >> ddot;
					for(int m=0; m<p; m++){
		    			for(int n=0; n<g; n++){
		    				if(v[m].order[n] == j+1){
		    					v[m].point += ddot;
		    				} 
		    			}
		    		}//fim soma de pontos
		    	}
		    	//imprime vencedor
		    	sort(v, v+p, funcPoint);
		    	cout << v[0].id;
		    	for(int i=1; i<p; i++){
		    	if(v[i].point == v[0].point)
		    		cout << " " << v[i].id;
		    	}
		    cout << endl;
		    //zerar os pontos
		    for(int z=0; z<p; z++)
		    	v[z].point = 0;

		    }//fim do S
		    
	}//while true
return 0;
    
}

int funcOrder(Pilot a, Pilot b){
	return a.order < b.order;
}

int funcPoint(Pilot a, Pilot b){
	if(a.point == b.point) return a.id < b.id;	
	else return a.point > b.point;
}

