#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t, a, b;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;
        if((2*a - b) % 3 || (2*a - b) < 0 || (2*b - a) % 3 || (2*b - a) < 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }

    return 0;
}