#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
 
int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    ll g; cin >> g;
    sum += g;
    for(ll i = 1; i < n; i++){
        ll aux; cin >> aux;
        sum+=aux;
        g = gcd(aux, g);
    }
    cout << sum/g << endl;
    return 0;
}