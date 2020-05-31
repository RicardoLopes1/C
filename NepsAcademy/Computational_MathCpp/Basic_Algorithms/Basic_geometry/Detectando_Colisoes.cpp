#include <iostream>
#include <string>
using namespace std;


int main(){
   	int retan1[4], retan2[4], inter = 0;
   		
   	
   	for(int i=0; i<4; i++)
   		cin >> retan1[i];

   	for(int i=0; i<4; i++)
   		cin >> retan2[i];
   	
   	
   	if(retan2[0] >= retan1[0] and retan2[0] <= retan1[2]){
   		if(retan2[1] >= retan1[1] and retan2[1] <= retan1[3])
   			inter = 1;
   	}

   	if(retan2[2] <= retan1[2] and retan2[2] >= retan1[0]){
   		if(retan2[3] <= retan1[3] and retan2[3] >= retan1[1])
   			inter = 1;
   	}
   	
   	if(retan2[1] >= retan1[1] and retan2[1] <= retan1[3]){
   		if(retan2[2] >= retan1[0] and retan2[2] <= retan1[2])
   			inter = 1;
   	}

   	if(retan2[0] >= retan1[0] and retan2[0] <= retan1[2]){
   		if(retan2[3] >= retan1[1] and retan2[3] <= retan1[3])
   			inter = 1;
   	}

   	if(retan2[0] <= retan1[0] or retan2[1] <= retan1[1]){
   		if(retan2[2] >= retan1[2] or retan2[3] >= retan1[3])
   			inter = 1;
   	}


   	cout << inter << endl;
   	
	return 0;
}



