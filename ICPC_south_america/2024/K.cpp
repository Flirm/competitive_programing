#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(n), v1, v2;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if(sum&1 || n < 2){ 
        cout << "-1\n";
        return 0;
    }
    sum = sum/2;
    sort(v.begin(), v.end());
    if(!n || v[n-1] > sum){
        cout << "-1\n";
        return 0;
    }
    
    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
    for(int i = 0; i <= n; i++) dp[i][0] = true;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(j >= v[i-1]){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-v[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    if(!dp[n][sum]){
        cout << "-1\n";
        return 0;
    }
    
    int i = n, j = sum;
    while(i > 0 && j > 0){
        if(dp[i-1][j]){
            v2.push_back(v[i-1]);
            i--;
        }
        else{
            v1.push_back(v[i-1]);
            j -= v[i-1];
            i--;
        }
    }
    while(i > 0){
        v2.push_back(v[i-1]);
        i--;
    }
    int s1 = 0, s2 = 0, i1 = 0, i2 = 0;
    while(s1 != sum || s2 != sum){
        if(s1 <= s2){
            cout << v1[i1] << " ";
            s1 += v1[i1];
            i1++;
        }
        else{
            cout << v2[i2] << " ";
            s2 += v2[i2];
            i2++;
        }
    }


    cout << "\n";
    return 0;
}