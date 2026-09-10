//https://moj.naquadah.com.br/treino/problema/?id=mdp-br-fp-2026%23a-alta-frequencia
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, p; 
    cin >> n;
    vector<int> c(n+1), v(n+1);

    //prefix sum
    for(int i = 1; i < n+1; i++){
        cin >> c[i] >> v[i];
        c[i] += c[i-1];
        v[i] += v[i-1];
    }

    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> p;
        if(!(c[p]^v[p])) cout << "NEUTRO\n";
        else if(c[p]>v[p]) cout << "COMPRA\n"; 
        else cout << "VENDA\n";
    }

    return 0;
}