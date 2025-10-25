#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x){
            int curr = x % 10;
            if(res > INT_MAX/10 || res < INT_MIN/10) return 0;
            res = res*10 + curr;
            x /= 10;
        }
        return res;
    }
};