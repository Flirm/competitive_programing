#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    ll n, k, l;
    cin >> n >> k;
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){ // input da matriz
        cin >> l;
        vector<int> v2(l);
        for(int j = 0; j < l; j++){
            cin >> v2[j];
        }
        v[i] = v2;
    }
    int target = n;
    vector<int> c(n);
    for(int i = 0; i < n; i++){ // input dos pesos c
        cin >> c[i];
    }
    vector<ll> r(n+1); // r[i] = quantos elementos tem no vertor b após aplicar o i-esimo c
    r[0] = 0;
    for(int i = 1; i <= n; i++){
        r[i] = r[i-1] + c[i-1]*v[i-1].size(); // elementos em b após ci é o que tinhamos antes + c*numero de elementos do ai
        if(r[i] >= k){target = i;break;} // se temos mais elementos do que o que queremos buscar, ja "encontramos"
    }

    ll index = r[target]-k; // r[t] - k = quantidade de elementos após r[t]
    index %= v[target-1].size(); // tirar o modulo normaliza a qtd de elementos
    index = v[target-1].size()-index-1; // tamanho do vetor - qts de elementos pós ele = pos do elemento; pos-1= indice do elemento 

    cout << v[target-1][index] << "\n";

    return 0;
}