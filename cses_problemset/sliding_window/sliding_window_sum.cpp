#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    ll n, k, x, a, b, c;
    cin >> n >> k >> x >> a >> b >> c;
    vector<ll> v(n);
    ll sum = x;
    v[0] = x;
    for(int i = 1; i < n; i++){
        v[i] = (a*v[i-1] + b) % c;
        if(i<k) sum+=v[i];
    }
    ll res = sum;
    ll l=0, r=k;
    while(r<n){
        sum += v[r] - v[l];
        res ^= sum;
        l++;r++;
    }
    cout << res << "\n";
    return 0;
}