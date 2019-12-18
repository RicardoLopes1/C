#include <iostream>

using namespace std;
/*Recebe dois números do tipo double e imprime com precisão de 8 casas decimais*/
int main(){
    double x, y;
    cin >> x >> y;
    cout.precision(8);
    cout.setf(ios::fixed);

    std::cout << (x+y)*3.14159 << std::endl;

    return 0;
}