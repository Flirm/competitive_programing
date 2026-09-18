#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    int n, m, a, b;
    ll c;
    cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
    }

    vector<ll> dist(n+1, INT64_MAX);
    dist[1] = 0;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll, int>>> pq;
    pq.push({0, 1});
    while(!pq.empty()){
        auto [d, a] = pq.top(); pq.pop();
        if(dist[a] < d) continue;
        for(auto [c, b] : adj[a]){
            if(dist[a] + c < dist[b]){
                dist[b] = dist[a] + c;
                pq.push({dist[b], b});
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }
    cout << "\n"; 

    return 0;
}