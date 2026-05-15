#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n, vector<int> ());
        for(auto e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        stack<int> s;
        vector<int> pe(n, 0);
        int t = 0;
        s.push(source);
        while(!s.empty()){
            int v = s.top(); s.pop();
            if(v==destination) return true;
            t++;
            pe[v] = t;
            for(auto w : adj[v]){
                if(pe[w] == 0) s.push(w);
            }
        }
        return false;
    }
};