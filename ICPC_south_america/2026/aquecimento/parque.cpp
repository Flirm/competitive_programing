//https://moj.naquadah.com.br/treino/problema/?id=mdp-br-fp-2026%23c-playground
#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, h, sum = 0;
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        int alt; cin >> alt;
        if(h>=alt) sum++;
    }
    cout << sum << "\n";

    return 0;
}