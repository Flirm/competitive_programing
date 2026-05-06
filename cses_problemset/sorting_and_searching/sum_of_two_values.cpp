#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());
    int r = n-1, l = 0;
    ll sum;
    while(l<r){
        sum = v[l].first + v[r].first;
        if(sum == x){
            cout << v[l].second << " " << v[r].second << "\n";
            return 0;
        }
        if(sum < x){
            l++;
        }
        else{
            r--;
        }
    }
    cout << "IMPOSSIBLE\n"; 
    return 0;
}