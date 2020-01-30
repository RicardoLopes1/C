#include <iostream>
#include <math.h>
using namespace std;


int main(){
      int n, o[2], p[2], aux, dif, ins_blind=0;

      cin >> n;

      for(int i=0; i<n; i++){
         cin >> o[0] >> o[1] >> p[0] >> p[1];
         dif = o[0] - p[0];
         aux = pow(dif, 2);
         ins_blind += aux;
         dif = o[1] - p[1];
         aux = pow(dif, 2);
         ins_blind += aux;
      }


      cout << ins_blind << endl;
      
   return 0;
}



