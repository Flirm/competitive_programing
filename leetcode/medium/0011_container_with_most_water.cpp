#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxH = 0, l = 0, r = height.size()-1;
        while(l<r){
            maxH = max(maxH, min(height[l], height[r])*(r-l));
            if(height[l] < height[r]) l++;
            else r--;
        }
        return maxH;
    }
};