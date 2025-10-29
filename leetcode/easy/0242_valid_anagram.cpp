#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int v[26] = {};
        for(int i = 0; i < s.size(); i++){
            v[s[i]-'a'] += 1;
        }
        for(int i = 0; i < t.size(); i++){
            v[t[i]-'a'] -= 1;
            if(v[t[i]-'a'] < 0) return false;
        }   
        return true;
    }
};