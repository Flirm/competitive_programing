#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll apply(ll n){
    ll tot = 1;
    while(n/10){
        tot*=n%10;
        n = n/10;
    }
    tot*=n;
    return tot;
}

int main(){
    int t;
    ll n;
    cin >> t;
    int per;
    while(t--){
        cin >> n;
        per = 0;
        while(n/10){
            n = apply(n);
            per++;
        }
        cout << per << "\n";
    }
    return 0;
}