#include<iostream>
#include<vector>
#include<cmath>
using ll = long long;
using namespace std;

int main(){
    int qtdTeste;
    cin >>qtdTeste;

    vector<int> valores={10,9,8,7,6,5,4,3,2,1};
    ll a,b;
    vector<ll> resp;
    for(int i=0;i<qtdTeste;++i){
        cin >> a >> b;
        if(a==b){
            resp.push_back(0);
        }else{
            ll numeroOp = 0;
            ll troco = abs(a-b);
            ll totalOp = 0;
            for(int j = 0;j<valores.size();j++){
                numeroOp = floor(troco/valores[j]);//qtd de operacoes com o mesmo valor
                troco-= numeroOp * valores[j];//tira essa qtd do troco
                totalOp +=numeroOp;//de operacoes
            }
            resp.push_back(totalOp);
        }
    }
    for(int k : resp){
        cout<< k <<endl;
    }
}
