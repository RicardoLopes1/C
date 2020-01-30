#include <iostream>
#include <math.h>
using namespace std;


int main(){
      int m[2], r[2], dif, dmin=0;

      cin >> m[0] >> m[1] >> r[0] >> r[1];
      dif = abs(m[0] - r[0]);
      dmin += dif;   
      dif = abs(m[1] - r[1]);
      dmin += dif;   
         
      cout << dmin << endl;
      
   return 0;
}



