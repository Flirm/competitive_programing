#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() <= numRows) return s;
        int num = 0; bool up = false;
        vector<string> v(numRows);
        for(int i = 0; i < s.size(); i++){
            if(num == numRows-1 || num == 0) up = !up;
            v[num]+= s[i];
            num += up ? 1 : -1;
        }
        string res;
        for(int i = 0; i < numRows; i++){
            res += v[i];
        }  
        return res;
    }
};