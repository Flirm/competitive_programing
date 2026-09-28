#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;

    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }
    sort(v.begin(), v.end());

    int max_c = 0, s = 0;
    for(auto [time, type] : v){
        s += type;
        max_c = max(s, max_c);
    }
    cout << max_c << "\n";

    return 0;
}