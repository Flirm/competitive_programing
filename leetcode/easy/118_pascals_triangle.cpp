#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp;
        dp.push_back({1});
        for(int i = 1; i < numRows; i++){
            vector<int> aux(i+1);
            for(int j = 0; j <= i; j++){
                if(!j || j == i) aux[j] = 1;
                else aux[j] = dp[i-1][j-1] + dp[i-1][j];
            }
            dp.push_back(aux);
        }
        return dp;
    }
};