#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while(l<=r){
            int middle = (l+r)>>1;
            bool big_l = (middle == 0 || nums[middle] > nums[middle-1]);
            bool big_r = (middle == nums.size()-1 || nums[middle] > nums[middle+1]);
            if(big_l && big_r) return middle;
            if(big_l) l = middle+1;
            else r = middle-1;
        }
        return -1;
    }
};