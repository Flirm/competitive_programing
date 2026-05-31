#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bit_count(int x){
        int a = 0;
        int count;
        while(a<=31){
            if(x>>a & 1){
                count = a+1;
            }
            a++;
        }
        return count;
    }

    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(divisor == 1) return dividend;
        bool pos = !(dividend <= 0 ^ divisor <= 0);
        long long ldividend = abs((long long)dividend); long long ldivisor = abs((long long)divisor);
        int a = bit_count(ldividend) - bit_count(ldivisor);
        int res = 0;
        while(ldivisor <= ldividend){
            if(ldivisor<<a <= ldividend){
                ldividend -= ldivisor<<a;
                res += 1<<a;
            }
            a--;
        }
        res = (pos ? res : -res);
        return res;
    }
};