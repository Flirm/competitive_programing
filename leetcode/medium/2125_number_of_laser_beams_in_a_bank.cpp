#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int last = 0, res = 0, curr = 0;
        for(int r = 0; r < bank.size(); r++){
            for(int i = 0; i < bank[r].size(); i++){
                if(bank[r][i] == '1') curr++;
            }
            if(curr){
                res += curr*last;
                last = curr;
                curr = 0;
            }
        }
        return res;
    }
};