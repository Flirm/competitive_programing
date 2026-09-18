#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m, q, a, b;
    ll c;
    cin >> n >> m >> q;

    vector<vector<ll>> d(n+1, vector<ll>(n+1, INT64_MAX));
    for(int i = 0; i <= n; i++){
        d[i][i] = 0;
    }
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        d[a][b] = min(c, d[a][b]); d[b][a] = min(c, d[b][a]);
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(d[i][k] == INT64_MAX || d[k][j] == INT64_MAX) continue;
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    while(q--){
        cin >> a >> b;
        if(d[a][b] == INT64_MAX) cout << "-1\n";
        else cout << d[a][b] << "\n";
    }

    return 0;
}