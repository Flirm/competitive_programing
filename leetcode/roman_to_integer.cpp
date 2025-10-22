#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        unordered_map<int, int> m = {{73, 1}, {86, 5}, {88, 10}, {76, 50}, {67, 100}, {68, 500}, {77, 1000}};
        size_t i = 0;
        while(i < s.size() - 1){
            if(m[s[i+1]] > m[s[i]]){
                num += m[s[i+1]] - m[s[i]];
                i += 2;
            }
            else{
                num += m[s[i]];
                i++;
            }
        }
        if(i == s.size() - 1) num += m[s[i]];
        return num;
    }
};