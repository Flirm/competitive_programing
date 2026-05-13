#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l<=r){
            int middle = (l+r)>>1;
            if(nums[middle] == target) return middle;
            if(nums[middle] < target) l = middle+1;
            else r = middle-1;
        }
        return -1;
    }
};