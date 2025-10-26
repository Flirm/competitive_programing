#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v = {1};
        for(int i = 1; i <= rowIndex; i++){
            vector<int> newRow(i+1);
            for(int j = 0; j < i+1; j++){
                if(!j || j==i) newRow[j] = 1;
                else newRow[j] = v[j-1] + v[j];
            }
            v = newRow;
        }
        return v;
    }
};