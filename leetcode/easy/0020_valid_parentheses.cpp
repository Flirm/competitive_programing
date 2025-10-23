#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.size() < 2) return false;
        unordered_map<char,char> m = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> innerMost;
        for(size_t i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') innerMost.push(s[i]);
            else{
                if(innerMost.empty()) return false;
                if(m[s[i]] != innerMost.top()){
                    return false;
                }
                else{
                    innerMost.pop();
                }
            }
        }
        if(!innerMost.empty()) return false;
        return true;   
    }
};