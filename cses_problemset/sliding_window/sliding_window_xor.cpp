#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    ll n, k, x, a, b, c;
    cin >> n >> k >> x >> a >> b >> c;
    vector<ll> v(n);
    v[0] = x;
    ll win = x;
    for(int i = 1; i < n; i++){
        v[i] = (a*v[i-1] + b) % c;
        if(i < k) win ^= v[i];
    }
    ll res = win;
    ll l = 0, r = k;
    while(r < n){
        win ^= v[l] ^ v[r];
        res ^= win;
        l++;r++;
    }
    cout << res << "\n";

    return 0;
}