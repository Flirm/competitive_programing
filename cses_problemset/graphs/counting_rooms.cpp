#include <bits/stdc++.h>

using namespace std;

int h_dir[4] = {-1, 0, 1, 0};
int v_dir[4] = {0, 1, 0, -1};


void dfs(int i, int j, vector<vector<int>> &mat, int n, int m){
    mat[i][j]++;
    for(int k = 0; k < 4; k++){
        int v = v_dir[k], h = h_dir[k];
        if(i+v > n-1 || i+v < 0 || j+h > m-1 || j+h < 0) continue;
        if(mat[i+v][j+h]&1){
            dfs(i+v, j+h, mat, n, m);
        }
    }
}


int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    pair<int,int> first;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < m; j++){
            int val = (s[j] == '#') ? 0 : 1;
            mat[i][j] = val;
        }
    }

    int comp = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j]&1){
                comp++;
                dfs(i, j, mat, n, m);
            }
        }
    }

    cout << comp << "\n";

    return 0;
}