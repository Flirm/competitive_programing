 #include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
int main(){
    ll x, y;
    cin >> x >> y;
    cout << max(x * (y/7), y * (x/7)) << endl;
    return 0;
}