#include<iostream>
#include<cmath>
using namespace std;
using ll = long long;

int main(){
    ll a,l,tamanhoTabuleiro;
    ll qtd = 0;
    cin >> a >> l;
    tamanhoTabuleiro = a * l;
    qtd = floor(tamanhoTabuleiro/2);
    cout<< qtd;
}