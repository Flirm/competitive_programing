#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1000000007;

int main(){
    ll n;
    ll a, b, c;
    cin >> n;
    while(n){
        cin >> a >> b >> c;
        ll exp = 1;
        while(c){
            if(c&1){
                exp = (exp*b) % (mod-1);
            }
            b = (b*b) % (mod-1);
            c >>= 1;
        }
        ll res = 1;
        while(exp){
            if(exp&1){
                res = (a*res) % mod;
            }
            a = (a*a) % mod;
            exp >>= 1;
        }
        cout << res << "\n"; 
        n--;
    }

}