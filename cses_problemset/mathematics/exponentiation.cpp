#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1000000007;

int main(){
    int n;
    ll a, b;
    cin >> n;
    while(n){
        cin >> a >> b;
        ll res = 1;
        while(b){
            if(b&1){
                res = (res*a) % mod;
            }
            a = (a*a) % mod;
            b >>= 1;
        }
        cout << res << "\n"; 
        n--;
    }

}