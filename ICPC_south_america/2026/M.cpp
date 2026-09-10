//https://moj.naquadah.com.br/treino/problema/?id=mdp-br-fp-2026%23m-microondas
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int get_index(int i, int n, int k){
    return k*n + i-1;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    //Criacao do grafo
    vector<vector<pair<ll,int>>> adj(((k+1)*n)+1);

    for (int z = 0; z < m; z++){
        int i, j;
        ll f, w;
        cin >> i >> j >> f >> w;

        for(int a = 0; a <= k; a++){
            int ind_i = get_index(i, n, a), ind_j = get_index(j, n, a);
            adj[ind_i].push_back({f, ind_j});
            adj[ind_j].push_back({f, ind_i});
        }
        if(w != -1){
            for(int a = k; a > 0; a--){
                int ind_i = get_index(i, n, a), ind_j = get_index(j, n, a-1); 
                adj[ind_i].push_back({w, ind_j});
                ind_i = get_index(i, n, a-1), ind_j = get_index(j, n, a); 
                adj[ind_j].push_back({w, ind_i});
            }
        }
    }   
    int ind_start = get_index(1, n, k), ind_end = (k+1)*n;
    for(int i = 0; i <= k; i++){
        int ind_i = get_index(n, n, i);
        adj[ind_i].push_back({0, ind_end});
    }

    //Dijkstra
    vector<ll> dist((k+1)*n + 1, INT64_MAX); dist[ind_start] = 0;
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll, int>>> pq; pq.push({0, ind_start});

    while(!pq.empty()){
        pair<ll,int> v = pq.top(); pq.pop();

        for(auto w : adj[v.second]){
            if(dist[v.second] + w.first < dist[w.second]){
                dist[w.second] = dist[v.second] + w.first;
                pq.push({dist[w.second], w.second});
            }
        }
    }

    cout << dist[ind_end] << "\n";

    return 0;
}