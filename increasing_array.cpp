#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, curr, last, moves = 0;
    cin >> n;
    cin >> last;
    for(int i = 1; i < n; i++){
        cin >> curr;
        if(curr < last){
            moves += last-curr;
        }
        else{
            last = curr;
        }
    }
    cout << moves << "\n";
    return 0;
}