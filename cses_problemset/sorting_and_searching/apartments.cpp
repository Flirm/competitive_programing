#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//n terminou

int main(){
    int n;
    ll m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    vector<ll> ap(m);
    int total = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(ll i = 0; i < m; i++){
        cin >> ap[i];
    }
    sort(v.begin(), v.end());
    sort(ap.begin(), ap.end());
    auto it = ap.begin();
    for(int i = 0; i < n; i++){
        if(!ap.size()) break;
        it = upper_bound(it, ap.end(), v[i]-k-1);
        if(it == ap.end()) break;
        if(*it >= v[i]-k){
            if(*it <= v[i]+k){
                it = it+1;
                total++;
            }
        }else{
            it = it+1;
        }
        
    }
    cout << total << "\n";

    return 0;
}