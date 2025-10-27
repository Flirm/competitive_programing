#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0, n = 0;
        for(int i = 0; i < nums.size(); i++){
            if(!n) res = nums[i];
            n += (nums[i]==res) ? 1 : -1;
        }
        return res;
    }
};