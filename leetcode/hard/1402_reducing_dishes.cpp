#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.rbegin(), satisfaction.rend());
        //max satisfaction cooking dishes from i-th dish to the j-th dish
        int dp[satisfaction.size() + 1];
        dp[0] = 0;
        for(int i = 1; i <= satisfaction.size(); i++){
            int take = 0, num = i, aux = 0;
            while(aux < i){
                take += (num)*satisfaction[aux];
                aux++;num--;
            }
            dp[i] = max(dp[i-1], take);
        }
        return dp[satisfaction.size()];
    }
};