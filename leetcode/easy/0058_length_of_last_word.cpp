#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i = s.size() - 1;
        while(s[i] == ' ') i--;
        for(; i>=0;i--){
            if(s[i] != ' ') len++;
            else return len;
        }
        return len;
    }
};