#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    int t;
    ll c, r, s;
    cin >> t;
    while(t--){
        cin >> c >> r >> s;
        ll total = ceil((double)(c+r)/s);
        cout << total - ceil((double)r/s) << " " << total - min(total, r) << "\n";
    }
    
    return 0;
}