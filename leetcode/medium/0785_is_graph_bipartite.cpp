#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> l(n, 0);
        queue<int> q;
        for(int i = 0; i < n; i++){
            if(l[i] == 0){
                l[i]=1;
                q.push(i);
                while(!q.empty()){
                    int v = q.front();
                    q.pop();
                    for(auto w : graph[v]){
                        if(l[w] == 0){
                            q.push(w);
                            l[w] = l[v]+1;
                        }
                        else if(l[w]==l[v]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};