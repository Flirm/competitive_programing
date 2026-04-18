#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<ll> dice = {1,2,3,4,5,6};
    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(auto d : dice){
            if(i-d >= 0){
                dp[i] = (dp[i] + dp[i-d]) % mod;
            }
        }
    }
    cout << dp[n] << "\n";
    return 0;
}