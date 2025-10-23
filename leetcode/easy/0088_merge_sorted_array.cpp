#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m-1, r = n-1, next = m+n-1;
        while(next >= 0){
            if(l<0){
                nums1[next] = nums2[r];
                r--;
                next--;
                continue;
            }
            if(r<0){
                break;  
            }
            if(nums1[l] > nums2[r]){
                nums1[next] = nums1[l];
                nums1[l] = 0;
                l--;
            }
            else{
                nums1[next] = nums2[r];
                r--;
            }
            next--;
        }
    }
};