#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long int x = 0;
        int op = 1;
        int l = 0;
        while(s[l] == ' ') l++;
        if(s[l]=='-' || s[l] =='+') {
            op = s[l]=='-' ? -1 : 1;
            l++;
        }
        while(l < s.size() && s[l]=='0') l++;
        while(l < s.size() && s[l] >= '0' && s[l] <= '9'){
            x *= 10;
            x += (s[l]-'0');
            if(x > INT32_MAX) return op>0 ? INT32_MAX : INT32_MIN;
            l++;
        }
        return (int) x * op;
    }
};