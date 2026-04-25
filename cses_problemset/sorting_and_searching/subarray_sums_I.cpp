#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    int n, res = 0; 
    ll x, sum;
    cin >> n >> x;
    int l = 0, r = 0;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n==1 && v[0] != x){
        cout << res << endl;
        return 0;
    }
    sum = v[r];
    while(r <= n-1 && l <= n-1){
        if(sum == x){
            res++;
            sum -= v[l];
            r++;l++;
            if(r == n) break;
            sum += v[r];
        }
        else if(sum < x){
            r++;
            sum += v[r];
        }
        else{
            sum -= v[l];
            l++;
        }
    }
    cout << res << endl;
    return 0;
}