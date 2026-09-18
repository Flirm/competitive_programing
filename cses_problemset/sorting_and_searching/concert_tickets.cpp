#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; 
    cin >> n >> m;
    multiset<int> h;

    for(int i = 0; i < n; i++){
        int j; cin >> j;
        h.insert(j);
    }

    for(int i = 0; i < m; i++){
        int t; cin >> t;
        auto x = h.upper_bound(t);
        if(x == h.begin()){
            cout << "-1\n";
        }
        else{
            cout << *(--x) << "\n";
            h.erase(x);
        }
    }

    return 0;
}