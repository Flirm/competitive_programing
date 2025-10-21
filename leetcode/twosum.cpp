#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //map number to its index for easy access
        unordered_map<int, int> m;
        for(size_t i = 0; i < nums.size(); i++){
            if(m[nums[i]]){
                return {(int) i, m[nums[i]] - 1};
            }
            m[target-nums[i]] = i+1;
        }
        return {0};
    }
};