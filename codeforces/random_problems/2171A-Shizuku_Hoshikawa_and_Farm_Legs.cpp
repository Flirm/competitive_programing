#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        if(n&1){
            cout << "0\n";
            continue;
        }
        cout << (int)(n/4) + 1 << "\n";
    }
    return 0;
}