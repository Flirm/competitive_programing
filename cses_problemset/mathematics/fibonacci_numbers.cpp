#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1000000007;

ll a, b, c, d;

void fdFib(ll n, ll res[]){
    if(n==0){
        res[0] = 0;
        res[1] = 1;
        return;
    }
    fdFib((n/2), res);
    a=res[0];
    b=res[1];
    c=2*b-a % mod;

    c = (a*c) % mod;
    d = (a*a + b*b) % mod;

    if(!(n&1)){
        res[0] = c;
        res[1] = d;
    }
    else{
        res[0] = d;
        res[1] = c+d % mod;
    }
}

int main(){
    ll n;
    cin >> n;
    ll res[2] = { 0 };
    fdFib(n, res);

    cout << res[0] << "\n"; 

    return 0;
}