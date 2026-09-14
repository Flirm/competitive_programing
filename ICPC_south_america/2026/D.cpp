//https://moj.naquadah.com.br/treino/problema/?id=mdp-br-fp-2026%23d-dragoes-vizinhos
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> map(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++){
            map[i][j] = (s[j] == '#') ? 0 : 1;
        }
    }

    vector<int> s(7,1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!map[i][j]){
                if(map[n-(i+1)][j]) s[0]=0;
                if(map[i][m-(j+1)]) s[1]=0;
                if(map[n-(i+1)][m-(j+1)]) s[2]=0;
                if(n == m){
                    if(map[j][i]) s[3]=0;
                    if(map[n-(j+1)][i]) s[4]=0;
                    if(map[j][n-(i+1)]) s[5]=0;
                    if(map[n-(j+1)][n-(i+1)]) s[6]=0;
                }
            }
        }
    }

    cout << 1 + accumulate(s.begin(), s.end(), 0) - (n==m ? 0 : 4) << "\n";

    return 0;
}