#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll pow10(int e){
    ll p = 1;
    for(int i = 0; i < e; i++){p*=10;}
    return p;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        ll k;
        cin >> k;

        int n = 1;
        while(n*9*pow10(n-1) < k){
            k -= n*9*pow10(n-1);
            n++;
        }

        ll num = (k-1) / n + pow10(n-1);
        int m = (k-1)%n;

        cout << to_string(num)[m] << "\n";
    }

    return 0;
}