#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        uint16_t dp[word1.size()+1][word2.size()+1];
        for(uint16_t i = 0; i < word1.size()+1; i++){
            for(uint16_t j = 0; j < word2.size()+1; j++){
                if(!i || !j){
                    dp[i][j] = !i ? j : i;
                    continue;
                }
                dp[i][j] = min({dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + ((word1[i-1]==word2[j-1])?0:1)});
            }
        }
        return dp[word1.size()][word2.size()];
    }
};