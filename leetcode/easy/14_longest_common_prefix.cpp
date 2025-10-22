#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string s = "";
    if(strs.size() == 1) return strs[0];
    sort(strs.begin(), strs.end(), [] (const string& f, const string& s){return f.size() < s.size();});
    for(size_t i = 0; i < strs[0].size(); i++){
        for(size_t j = 1; j < strs.size(); j++){
            if(strs[j][i] != strs[0][i]) return s;
        }
        s += strs[0][i];
    }
    return s;   
    }
};