#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll find_lim(ll n, vector<ll> d){
    ll l = -1, r = 200000000000, c = 0;
    for(int i = 1; i <= n; i++){
        if(i&1){
            l = max(l, 1 - c);
        }   
        else{
            r = min(r, c - 1);
        }
        c = d[i]-c;
    }
    if(l > r){return -1;}
    return r;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> d(n+1, 0);
    pair<ll, ll> aux1, aux2;
    cin >> aux1.first >> aux1.second;
    for(ll i = 1; i < n; i++){
        cin >> aux2.first >> aux2.second;
        d[i] = abs(aux1.first - aux2.first) + abs(aux1.second - aux2.second);
        aux1 = aux2;
    }
    cout << find_lim(n, d) << "\n";
    return 0;
}