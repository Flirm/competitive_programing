#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = 1000000007;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    vector<ll> dp(x+1);
    dp[0]=1;
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    for(int i = 1; i <= x; i++){
        for(auto c : coins){
            if(i-c >= 0){
                dp[i] = (dp[i]+dp[i-c]) % mod;
            }
        }
    }
    cout << dp[x] << "\n";
    return 0;
}