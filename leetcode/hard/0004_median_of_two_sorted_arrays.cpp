#include <bits/stdc++.h>

using namespace std;

double median(vector<int>& nums1, vector<int>& nums2){
    int m = nums1.size(), n = nums2.size();
    if(m > n) return median(nums2, nums1);//nums1 < nums2
    int t = n+m;//total size
    int left = (t+1)>>1;//left partition size
    int low = 0, high = m;//binary search vars

    while(low <= high){
        int mid1 = (low + high) >> 1;//element from nums1 in left partition
        int mid2 = left - mid1;//element from nums2 in left partition

        int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;//l1, l2 largest value from nums1, nums2 in left partition. r1, r2 smallest value from nums1, nums2 in right partition
        if(mid1 < m) r1 = nums1[mid1];//if mid1 in nums1 bounds -> r1 gets middle value
        if(mid2 < n) r2 = nums2[mid2];//same for mid2 and nums2 with r2
        if(mid1-1 >= 0) l1 = nums1[mid1-1];//if mid1-1 in nums1 bounds -> l1 gets mid1-1 value
        if(mid2-1 >= 0) l2 = nums2[mid2-1];//same for mid2, nums2, l2

        if(l1 <= r2 && l2 <= r1){//if conditions are satisfied -> partition found
            if(t&1){//if total size is odd -> check only middle value
                return max(l1,l2);
            }
            else{//else -> return mean 
                return (((double)(max(l1,l2) + min(r1,r2)))/2.0);
            }
        }
        else if(l1 > r2) high = mid1 - 1;//move towards nums1 begin direction
        else low = mid1 + 1;//move towards nums2 end direction
    }
    return 0;//something wrong
}


int main(){
    vector<int> v1 = {1,3};
    vector<int> v2 = {2};

    cout << median(v1,v2) << endl;

    return 0;
}