//https://moj.naquadah.com.br/treino/problema/?id=mdp-br-fp-2026%23k-contingencia
#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, a, min_diff = INT32_MAX;
    cin >> n;
    vector<int> pref(n+1);

    for(int i = 1; i <= n; i++){
        cin >> pref[i];
        pref[i] = pref[i] + pref[i-1];
    }
    for(int i = 1; i <= n; i++){
        int k; cin >> k;
        min_diff = min(min_diff, pref[i]-pref[i-1]-k);
        if(min_diff < 0){
            cout << "-1\n";
            return 0;
        }
    }
    cout << pref[n]-min_diff << "\n";

    return 0;
}