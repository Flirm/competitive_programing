#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].second;
        cin >> v[i].first;
    }
    sort(v.begin(), v.end());
    int res = 1, last_seen = v[0].first;
    for(int i = 1; i < n; i++){
        if(v[i].second >= last_seen){
            res++;
            last_seen = v[i].first;
        }
    }
    cout << res << "\n"; 

    return 0;
}