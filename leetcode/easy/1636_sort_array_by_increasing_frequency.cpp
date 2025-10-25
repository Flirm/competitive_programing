#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        if(nums.size() <= 2) {
            sort(nums.begin(),nums.end(), greater<int>());
            return nums;
        }
        sort(nums.begin(), nums.end());
        //order fist item ascending second descending
        auto cmp = [](const pair<int,int>& a, const pair<int,int>& b){
            if(a.first == b.first){
                return a.second > b.second;
            }
            return a.first < b.first;
        };
        vector<int> res;
        //frequency-number
        set<pair<int,int>, decltype(cmp)> s(cmp);
        int x = nums[0], count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != x){
                s.insert({count, x});
                x = nums[i];
                count = 1;
                continue;
            }
            count++;
        }
        s.insert({count,x});
        for(auto p : s){
            for(int i = 0; i < p.first; i++){
                res.push_back(p.second);
            }
        }
        return res;
    }
};