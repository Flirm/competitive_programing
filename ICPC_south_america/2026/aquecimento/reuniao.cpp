//https://moj.naquadah.com.br/treino/problema/?id=mdp-br-fp-2026%23a-reuniao
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int total = k-(n-1);
    total /= n;
    cout << total << "\n";

    return 0;
}