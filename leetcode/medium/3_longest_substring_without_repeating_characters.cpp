#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a = s.size();
        if(!a) return 0;
        int longest = 0;
        //stores last appearance of char in s
        vector<int> v(300, -1);
        int j = 0;
        
        for(int i = 0; i < a; i++){
            j = max(j, v[s[i]] + 1);
            longest = max(longest, i-j+1);
            v[s[i]] = i;
        }
        return longest;
    }
};