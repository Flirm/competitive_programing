#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n-2; j++){
            int l = j+1, r=n-1;
            while(l<r){
                ll sum = v[i].first + v[j].first + v[l].first + v[r].first;
                if(sum == x){
                    cout << v[i].second << " " << v[j].second << " " << v[l].second << " " << v[r].second << "\n";
                    return 0;
                }
                if(sum < x){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}