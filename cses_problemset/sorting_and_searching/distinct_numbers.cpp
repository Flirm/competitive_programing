#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    
    int n;
    set<ll> v;
    ll aux;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux;
        v.insert(aux);
    }
    cout << v.size() << "\n";
    
    return 0;
}