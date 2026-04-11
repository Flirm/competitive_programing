#include <bits/stdc++.h>

using namespace std;

vector<string> board(8);
vector<bool> col(8, false), dig1(15, false), dig2(15, false);
int res = 0;

void solve(int linha){
    if(linha == 8) {
        res += 1;
        return;
    } 

    for(int coluna = 0; coluna < 8; coluna++){
        if(board[linha][coluna] == '*' || col[coluna] || dig1[linha-coluna+7] || dig2[linha+coluna]) continue;

        col[coluna] = true;
        dig1[linha-coluna+7] = true;
        dig2[linha+coluna] = true;

        solve(linha+1);
        
        col[coluna] = false;
        dig1[linha-coluna+7] = false;
        dig2[linha+coluna] = false;
    }
}

int main(){

    for(int i = 0; i < 8; i++){
        getline(cin , board[i]);
    }

    solve(0);

    cout << res << endl;

}