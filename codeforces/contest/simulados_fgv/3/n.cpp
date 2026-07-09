#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() 
{
    ll n;
    cin >> n;
    vector<ll> v(n+2);
    pair<ll,ll> s = {-1,0};
    for(ll i = 0; i < n+2; i++){
        cin >> v[i];
        if(v[i] >= s.first) {s.first = v[i]; s.second = i;}
    }
    v.erase(v.begin()+s.second);
    sort(v.rbegin(), v.rend());
    ll sum = 0;
    for(int i = 0; i < n+1; i++){
        v[i] = s.first - v[i];
        sum += v[i];
    }
    v.erase(find(v.begin(),v.end(), sum-s.first));
    cout << s.first << " " << v.back() << endl;
    for(ll i = 0; i < n-1; i++){
        cout << v[i] << " ";
    }
    cout << v[n-1] << endl;
    return 0;
}