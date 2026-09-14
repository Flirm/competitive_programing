#include <bits/stdc++.h>

using namespace std;

void dfs(int v, int r, vector<vector<int>> &adj, vector<int> &vis, vector<int> &root){
    vis[v] = 1;
    root[v] = r;
    for(auto w : adj[v]){
        if(!vis[w]){
            dfs(w, r, adj, vis, root);
        }
    }
    return;
}

int main(){
    int f, n;
    cin >> f >> n;

    vector<pair<int,int>> sweep, times(n+1);
    unordered_map<int, int> invites, order;
    vector<int> go(n+1), who(n+1), root(n+1), confirmed;
    vector<vector<int>> depend(n+1);

    for(int i = 0; i < n; i++){
        int k, p;
        cin >> k >> p;
        invites[k] = p;
        order[k] = i+1;
        who[i+1] = k;
    }
    for(int i = 1; i <= n; i++){
        string res;
        cin >> res;

        if(res == "A"){
            int a, t;
            cin >> a >> t;
            times[i] = {a, t};
            confirmed.push_back(i);
        }
        else if(res == "T"){
            int x;
            cin >> x;
            depend[order[x]].push_back(i);
        }
    }
    for(auto i : confirmed){
        dfs(i, i, depend, go, root);
    }
    for(int i = 1; i <= n; i++){
        if(go[i]){
            auto [a, t] = times[root[i]];
            sweep.push_back({a, invites[who[i]]});
            sweep.push_back({a+t, -invites[who[i]]});
        }
    }
    sort(sweep.begin(), sweep.end());

    long long sum = 0, max_sum = 0;

    for(auto [t, p] : sweep){
        sum += p;
        max_sum = max(sum, max_sum);
    }

    cout << max_sum << "\n";

    return 0;
}