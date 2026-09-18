#include <bits/stdc++.h>

using namespace std;

void course(array<int, 3> init, int n, vector<vector<int>> &map){
    queue<array<int, 3>> q; q.push(init);
    
    while(!q.empty()){
        auto [i, j, curr] = q.front(); q.pop();
        
        if(i < 0 || i > n-1 || j < 0 || j > n-1) continue;
        if(curr < map[i][j]) map[i][j] = curr;
        else continue;

        q.push({i+2, j+1, curr+1});
        q.push({i+2, j-1, curr+1});
        q.push({i-2, j+1, curr+1});
        q.push({i-2, j-1, curr+1});
        q.push({i+1, j+2, curr+1});
        q.push({i-1, j+2, curr+1});
        q.push({i+1, j-2, curr+1});
        q.push({i-1, j-2, curr+1});

    }
    return;
}


int main(){
    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n, INT32_MAX));

    course({0, 0}, n, board);

    for(auto i : board){
        for(auto j : i){
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}