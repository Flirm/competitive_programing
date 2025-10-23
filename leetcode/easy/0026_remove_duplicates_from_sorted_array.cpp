#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        int k = 1;
        int curr = nums[0];
        for(int i = 1; i < nums.size(); i++){
            auto it = upper_bound(nums.begin(), nums.end(), nums[i-1]);
            if(it == nums.end()) break;
            nums[i] = *it;
            k++;
        }
        return k;
    }
};