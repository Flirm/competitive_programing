#include <bits/stdc++.h>

using namespace std;

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

    vector<int> dist(n+1), pai(n+1);
    dist[1] = 1;
    pai[1] = -1;
    queue<int> q; q.push(1);
    while(!q.empty()){
        auto v = q.front(); q.pop();
        for(auto w : adj[v]){
            if(!dist[w]){
                dist[w] = dist[v] + 1;
                pai[w] = v;
                q.push(w);
            }
        }
    }
    if(dist[n]){
        cout << dist[n] << "\n";
        stack<int> s;
        while(pai[n] != -1){
            s.push(n);
            n = pai[n];
        }
        s.push(n);
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << "\n";
    }
    else{
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}