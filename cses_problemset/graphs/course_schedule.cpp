#include <bits/stdc++.h>

using namespace std;

void dfs(int v, bool &cycle, vector<vector<int>> &adj, vector<int> &vis, deque<int> &ord){
    vis[v] = 1;
    for(auto w : adj[v]){
        if(!vis[w]){
            dfs(w, cycle, adj, vis, ord);
        }
        else if(vis[w]&1){
            cycle = true;
            return;
        }
    }
    ord.push_front(v);
    vis[v] = 2;
}


int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n+1, vector<int>());
    vector<int> vis(n+1);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
    }

    deque<int> ord; bool cycle = false;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, cycle, adj, vis, ord);
            if(cycle){
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    while(!ord.empty()){
        cout << ord.front() << " ";
        ord.pop_front();
    }
    cout << "\n";

    return 0;
}