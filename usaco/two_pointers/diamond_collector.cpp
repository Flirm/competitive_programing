#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n; ll k;
    cin >> n >> k;
    ll v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v, v+n);

    int l = n-2, r = n-1;
    int sufix[n+1];
    sufix[n] = 0;
    sufix[n-1] = 1;
    while(l>=0){
        ll diff = abs(v[l]-v[r]);
        if(diff <= k){
            sufix[l] = sufix[l+1]+1;
        }
        else{
            sufix[l] = sufix[l+1];
            r--;
        }
        l--;
    }
    l=0,r=1;
    int d = 2;
    int max_diff = 0;
    while(r < n){
        ll diff = abs(v[l]-v[r]);
        if(diff <= k){
            d = r-l+1;
        }
        else{
            d--;
            l++;
        }
        max_diff = max(max_diff, d + sufix[r+1]);
        r++;
    }

    cout << max_diff << "\n";

    return 0;
}