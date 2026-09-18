#include <bits/stdc++.h>

using namespace std;

bool dfs_color(int v, vector<int> &color, vector<vector<int>> &adj){
    stack<int> s; s.push(v);

    while(!s.empty()){
        auto v = s.top(); s.pop();
        for(auto w : adj[v]){
            if(color[w] == color[v]) return false;
            if(color[w] == -1){
                color[w] = !color[v];
                s.push(w);
            }
        }
    }

    return true;
}

int main(){
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> color(n+1, -1);
    for(int i = 1; i <= n; i++){
        if(color[i] == -1){
            color[i] = 0;
            bool res = dfs_color(i, color, adj);
            if(!res) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << color[i]+1 << " "; 
    }
    cout << "\n";

    return 0;
}