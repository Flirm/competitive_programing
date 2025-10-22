#include <bits/stdc++.h>

using namespace std;

double median(vector<int>& nums1, vector<int>& nums2){
    auto l1 = nums1.begin(), l2 = nums2.begin();
    auto r1 = nums1.end(), r2 = nums2.end();
    int m = nums1.size(), n = nums2.size();
    int t = n+m;
    if(t&1){
        t >>= 1;

    }
    else{
        t >>= 1; int t2 = t-1;
    }

}


int main(){
    vector<int> v1 = {1,3};
    vector<int> v2 = {2};

    cout << median(v1,v2) << endl;

    return 0;
}