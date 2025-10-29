#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int c = 0;
        for(int i = 0; i < s.length(); i++){
            c -= (int)(s[i]-'a');
            c += (int)(t[i]-'a');
        }
        c += (int)(t[t.size()-1]-'a');
        return (char)(c+'a');
    }
};