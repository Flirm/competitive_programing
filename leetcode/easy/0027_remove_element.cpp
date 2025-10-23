#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r = nums.size()-1, l = 0;
        while(l < r){
            while(nums[r] == val){
                r--;
                if(r<0)break;
            }
            if(r<0)break;
            if(nums[l] == val){
                nums[l] = nums[r];
                nums[r] = val;
                while(nums[r] == val){
                    r--;
                    if(r<0)break;
                }
            }
            l++;
        }
        if(!r && nums[r] == val) return 0;
        return r+1;
    }
};