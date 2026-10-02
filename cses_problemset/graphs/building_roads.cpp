#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<vector<int>> &adj, vector<bool> &vis){
    for(auto w : adj[v]){
        if(!vis[w]){
            vis[w] = true;
            dfs(w, adj, vis);
        }
    }
    return;
}


int main(){
    int n, m;
    cin >> n >> m;   

    vector<vector<int>> adj(n+1, vector<int>());
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> vis(n+1); vector<int> roots;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            roots.push_back(i);
            vis[i] = true;
            dfs(i, adj, vis);
        }
    }

    cout << roots.size() - 1 << "\n";
    for(int i = 0; i < roots.size()-1; i++){
        cout << roots[i] << " " << roots[i+1] << "\n";
    }

    return 0;
}