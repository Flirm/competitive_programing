#include <bits/stdc++.h>

using namespace std;

int h_dir[4] = {-1, 0, 1, 0};
int v_dir[4] = {0, 1, 0, -1};
char k_dir[4] = {'L', 'D', 'R', 'U'};
int n, m;

void bfs(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dist, vector<vector<pair<pair<int,int>, char>>> &path){
    queue<pair<int,int>> q; q.push({i, j});
    mat[i][j]++;
    while(!q.empty()){
        auto [i, j] = q.front(); q.pop();
        for(int k = 0; k < 4; k++){
            int v = v_dir[k], h = h_dir[k];
            if(i+v > n-1 || i+v < 0 || j+h > m-1 || j+h < 0) continue;
            if(mat[i+v][j+h]&1){
                mat[i+v][j+h]++;
                dist[i+v][j+h] = dist[i][j] + 1;
                path[i+v][j+h] = {{i, j}, k_dir[k]};
                q.push({i+v, j+h});
            }
        }
    }

}


int main(){
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m)), dist(n, vector<int>(m));
    vector<vector<pair<pair<int,int>, char>>> path(n, vector<pair<pair<int,int>, char>>(m));
    pair<int,int> start, end;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < m; j++){
            if(s[j] == 'A') start = {i,j};
            else if(s[j] == 'B') end = {i,j};
            int val = (s[j] == '#') ? 0 : 1;
            mat[i][j] = val;
        }
    }


    auto [i, j] = start;
    auto [x, y] = end;
    dist[i][j] = 0;
    path[i][j] = {{-1, -1}, '\n'};
    bfs(i, j, mat, dist, path);
    if(dist[x][y]){
        cout << "YES\n" << dist[x][y] << "\n";
        deque<char> s;
        while(path[x][y].first != make_pair(-1,-1)){
            s.push_front(path[x][y].second);
            auto [a, b] = path[x][y].first;
            x = a; y = b;
        }s.push_back(path[x][y].second);
        while(!s.empty()){
            cout << s.front(); s.pop_front();
        }

    }
    else{
        cout << "NO\n";
    }

    return 0;
}