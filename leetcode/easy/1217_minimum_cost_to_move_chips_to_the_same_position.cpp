#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int pos[2] = {0,0};
        for(auto p : position){
            pos[p&1]++;
        }
        return min(pos[0], pos[1]);    
    }
};