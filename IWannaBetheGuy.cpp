#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll totalNiveis, qtdNiveis;
    vector<ll> niveisPassados;
    cin >> totalNiveis;
    
    //recuperar os niveis que cada um passou 
    int player = 1;
    while (player <= 2) {
        cin >> qtdNiveis;
        for (int i = 0; i < qtdNiveis; i++) {
            ll nivel;
            cin >> nivel;
            niveisPassados.push_back(nivel);
        }
        player++;
    }
    //ordena os niveis em ordem crescente O(nlogn)
    sort(niveisPassados.begin(),niveisPassados.end());

    ll nvlAtual = 1;
    for(ll k:niveisPassados){
        if(k==nvlAtual){
            nvlAtual++;
        }
    }
    if((nvlAtual-1) == totalNiveis)cout<< "I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}
