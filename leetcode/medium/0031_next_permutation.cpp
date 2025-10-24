#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int r = -1;
        int x = nums[nums.size()-1];
        for(int i = nums.size()-2; i >= 0; i--){
            if(x > nums[i]){
                r = i;
                break;
            }
            x = nums[i];
        }
        if(r == -1) return sort(nums.begin(), nums.end()); 
        x = nums[r+1];
        int s = r+1;
        for(int i = r+1; i < nums.size(); i++){
            if(nums[i] > nums[r] && nums[i] < x){
                x = nums[i];
                s = i;
            }
        }
        int temp = nums[r];
        nums[r] = x;
        nums[s] = temp;
        sort(nums.begin()+r+1, nums.end());
    }
};