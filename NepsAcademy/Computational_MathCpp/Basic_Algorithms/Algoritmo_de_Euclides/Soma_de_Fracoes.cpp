#include <iostream>
#include <vector>

using namespace std;

typedef long long int LL;

LL mdc(LL a, LL b);
LL mmc(LL a, LL b);
vector<LL> somaDeFracoes(LL num1,LL den1,LL num2,LL den2);

int main(){
    LL frac1[2], frac2[2];
    vector<LL> varfracao;

    cin >> frac1[0] >> frac1[1] >> frac2[0] >> frac2[1];
    varfracao = somaDeFracoes(frac1[0], frac1[1], frac2[0], frac2[1]);
    
    cout << varfracao[0] << " " << varfracao[1] << endl;
    
    return 0;

}

//MDC 
LL mdc(LL a, LL b){
    return (b == 0 ? a : mdc(b, a%b));
    // if b == 0, return a, else return mdc(b, a%b)
}
//MMC
LL mmc(LL a,LL b){
    return (a/mdc(a, b)*b);
}

//Soma de frações
vector<LL> somaDeFracoes(LL num1,LL den1,LL num2,LL den2){
    vector<LL> fracao;
    LL varmdc;
    LL varmmc;
    
    varmmc = mmc(den1, den2);
    num1 = (varmmc/den1) * num1;
    num2 = (varmmc/den2) * num2;
    num1 += num2;
    varmdc = mdc(num1, varmmc);
    
    //reduzindo as frações
    num1 /= varmdc;
    varmmc /= varmdc;
    fracao.push_back(num1);
    fracao.push_back(varmmc);
    return fracao;        

}