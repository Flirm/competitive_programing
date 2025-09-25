#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

    ll n, k, best = 0;
    cin >> n >> k;
    vector<ll> v(n+1),prefix(n+1, 20000000000), sufix(n+2, 20000000000);
    multiset<ll> ms;

    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        prefix[i] = min(prefix[i-1], v[i]); //min prefix up to i
    }
    for(ll i = n; i > 0; i--){
        sufix[i] = min(sufix[i+1], v[i]); //min sufix up to i
    }

    for(ll i = 1; i <= n; i++){
        //compare the minimum in sliding window, to min sufix and min prefix
        ms.insert(v[i]+i);
        if(i - k > 0){
            ms.erase(ms.find(v[i-k] + i - k));
        }
        ll curr = *ms.begin() - i + k;
        if(i - k > 0){
            curr = min(curr, prefix[i - k]);
        }
        if(i < n){
            curr = min(curr, sufix[i + 1]);
        }
        best = max(best, curr);
    }
    cout << best << "\n";
    
    return 0;
}