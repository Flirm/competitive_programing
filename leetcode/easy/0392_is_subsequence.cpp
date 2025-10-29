#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0;
        for(int i = 0; i < t.size(); i++){
            if(s[l] == t[i]) l++;
        }
        if(l != s.size()) return false;
        return true;
    }
};