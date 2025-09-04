#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll r = 1, m = pow(10,9) + 7;
    for(int i = 0; i < n; i++){
        r = (r << 1) % m;
    }
    cout << r << "\n";
    return 0;
}