#include <bits/stdc++.h>

using namespace std;

void dfs(int s, bool act, vector<vector<int>> &adjA, vector<vector<int>> &adjF, vector<int> &paiA, vector<int> &paiF, int r, vector<int> &root){
    if(act) root[s] = r;
    if(act){
        for(auto w : adjA[s]){
            if(!paiF[w]){
                paiF[w] = s;
                dfs(w, false, adjA, adjF, paiA, paiF, r, root);
            }
        }
    }
    else{
        for(auto w : adjF[s]){
            if(!paiA[w]){
                paiA[w] = s;
                dfs(w, true, adjA, adjF, paiA, paiF, r, root);
            }
        }
    }

    return;
}


int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adjA(m+1), adjF(n+1);

    for(int i = 1; i <= n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int act; 
            cin >> act;
            adjF[i].push_back(act);
            adjA[act].push_back(i);
        }
    }

    int q, x, y;
    cin >> q;

    vector<int> paiA(m+1), paiF(n+1), root(m+1);
    for(int i = 1; i <= m; i++){
        if(paiA[i] == 0) {
            paiA[i] = -1;
            dfs(i, true, adjA, adjF, paiA, paiF, i, root);
        }
    }

    for(int i = 0; i < q; i++){
        cin >> x >> y;
        
        if(root[x] != root[y]){
            cout << "-1\n";
        }
        else{
            stack<int> cy;
            deque<int> cx;
            while(x != root[x]){
                cx.push_front(x);
                cx.push_front(paiA[x]);
                x = paiF[paiA[x]];
            }
            while(y != root[y]){
                cy.push(y);
                cy.push(paiA[y]);
                y = paiF[paiA[y]];
            }
            cx.push_front(x);
            cout << (cx.size() + cy.size())/2 + 1 << "\n";
            while(!cx.empty()){
                cout << cx.back() << " "; 
                cx.pop_back();
            }
            while(!cy.empty()){
                cout << cy.top() << " ";
                cy.pop();
            }
            cout << "\n";
        }
    }

    return 0;
}