#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        int x = 0;
        int i = 31;
        while(n){
            if(n&1){
                x += 1<<i;
            }
            n >>= 1;
            i--;
        }
        return x;
    }
};