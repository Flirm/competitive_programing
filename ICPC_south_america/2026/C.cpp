#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, c, k;
    cin >> t >> c >> k;
    
    int res = min(t*k, c);
    cout << res << "\n";

    return 0;
}