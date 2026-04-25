#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n;
    ll res = 0, x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){cin >> v[i];}

    map<ll, int> prefix;
    prefix[0] = 1;
    ll sum = 0;
    for(auto i : v){
        sum += i;
        res += prefix[sum-x];
        prefix[sum]++;
    }

    cout << res << endl;
    return 0;
}