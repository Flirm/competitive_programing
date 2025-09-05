#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(int idx, vector<ll> v, ll s1, ll s2, ll n){
    if(idx == n) return abs(s1-s2);

    ll c = solve(idx+1, v, s1 + v[idx], s2, n);
    ll nc = solve(idx+1, v, s1, s2+v[idx], n);

    return min(c,nc);
}


int main(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << solve(0, v, 0, 0, n);
    return 0;
}