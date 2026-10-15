#include <bits/stdc++.h>

using namespace std;

int dfs_cycle(int v, vector<vector<int>> &adj, vector<int> &vis, vector<int> &pai){
    vis[v] = true;
    int cycle = 0;
    for(auto w : adj[v]){
        if(cycle) break;
        if(!vis[w]){
            pai[w] = v;
            cycle = dfs_cycle(w, adj, vis, pai);
        }
        else if(w != pai[v]){
            pai[w] = v;
            cycle = w;
        }
    }
    return cycle;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> vis(n+1), pai(n+1);
    int w = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]) w = dfs_cycle(i, adj, vis, pai);
        if(w){
            stack<int> s; int count = 0;
            int v = w;
            s.push(v);
            v = pai[v];
            while(v != w){
                s.push(v);
                v = pai[v];
            }s.push(w);
            cout << s.size() << "\n";
            while(!s.empty()){
                cout << s.top() << " ";
                s.pop();
            }cout << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}