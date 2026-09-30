//https://codeforces.com/contest/796/problem/D
#include <bits/stdc++.h>

using namespace std;

void bfs(vector<int> p, int n, int lim, vector<vector<int>> &adj, vector<pair<int,int>> &dist){
    queue<int> q;
    vector<bool> vis(n+1);
    for(auto r : p){
        q.push(r);
        vis[r] = true;
    }

    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto u : adj[v]){
            if(!vis[u]){
                vis[u] = true;
                auto [d, p] = dist[u];
                if(d == INT32_MAX && dist[v].first + 1 <= lim){
                    dist[u] = {dist[v].first+1, dist[v].second};
                    q.push(u);
                }
            }
        }
    }

    return;
}

int main(){
    int n, k, d;
    cin >> n >> k >> d;

    vector<vector<int>> adj(n+1, vector<int>());
    vector<pair<int,int>> edge(n-1);
    vector<int> p(k);
    //dist from any node to a police station and the coresponding station
    vector<pair<int, int>> dist(n+1, {INT32_MAX, -1}); 
    for(int i = 0; i < k; i++){ 
        cin >> p[i]; 
        dist[p[i]] = {0, p[i]};
    }

    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        edge[i] = {min(u, v), max(u, v)};
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //bfs on p-station nodes, after that dist vector will have the distance from the node to a station, putting them in that stations group.
    bfs(p, n, d, adj, dist);
    
    //if any node has dist > d its impossible, but the problem states that this is impossible by default
    //all edges that go from a node in the group to a node outside of it can be removed without problems
    vector<int> cuts;
    for(int i = 1; i < n; i++){
        auto [u, v] = edge[i-1];
        auto [d1, ru] = dist[u];
        auto [d2, rv] = dist[v];
        if(ru != rv){
            cuts.push_back(i);
        }
    }
    
    cout << cuts.size() << "\n";
    for(auto e : cuts){
        cout << e << " ";
    }  
    cout << "\n";

    return 0;
}