#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ll t, n, m, x;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m >> x;
        ll count = 1;
        count += m*((x-1)%n) + (x-1)/n; 
        cout << count << "\n";
    }
 
    return 0;
}