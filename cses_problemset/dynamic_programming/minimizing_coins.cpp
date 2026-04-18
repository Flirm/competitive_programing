#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n, x, ci;
    cin >> n >> x;
    vector<int> dp(x+1, 200000000);
    dp[0] = 0;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> ci;
        c[i] = ci;
    }
    for(int i = 1; i <= x; i++){
        for(int j : c){
            if(i-j >= 0) dp[i] = min(dp[i], dp[i-j] + 1);
        }
    }
    int res = dp[x]==200000000 ? -1 : dp[x];
    cout << res << "\n"; 

    return 0;
}