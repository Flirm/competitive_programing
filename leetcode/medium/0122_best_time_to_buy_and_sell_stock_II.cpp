#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, last_buy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < last_buy){
                last_buy = prices[i];
            }
            if(prices[i] > last_buy){
                profit += prices[i]-last_buy;
                last_buy = prices[i];
            }
        }
        return profit;
    }
};