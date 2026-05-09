#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool possible(ll x, ll k, vector<ll> v){   
    // é possivel tornar o valor minimo em a maior ou igual a x em k passos?
    ll sum = 0;
    for(ll i = 1; i < v.size(); i++){
        if(v[i] < x){
            sum += (x-v[i]+i-1)/i; // numero de vezes que precisamos somar i à v[i] para ser >= a x é dado pela equação: ceil((oq falta)/incremento)
        }
        if(sum > k) return false; // se o numero de somas necessarias passar de k, nao conseguimos ter a resposta para x
    }
    return true;
}

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n+1);
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
    }
    ll l = 1, r = v[1]+k+1; // resposta garantidamente valida para l e garantidamente invalido para r
    while(r-l > 1){ // busca binaria nas solucoes
        ll middle = (l+r)/2;
        if(possible(middle, k, v)){
            l = middle;
        }
        else{
            r = middle;
        }
    }
    cout << l << "\n";

    return 0;
}