#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(!x) return true;
        string s = to_string(x);
        for(size_t i = 0; i < s.size(); i++){
            if(s[i] != s[s.size()-(i+1)]) return false;
        }
        return true;
    }
};