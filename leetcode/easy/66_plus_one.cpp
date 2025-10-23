#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1] < 9){
            digits[digits.size()-1] += 1;
            return digits;
        }
        vector<int> aux;
        int cIn = 0;
        for(int i = digits.size()-1; i >= 0; i--){
            if(digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            else{
                digits[i] = 0;
                cIn = 1;
            }
        }
        if(cIn){
            vector<int> v = {1};
            v.insert(v.end(), digits.begin(), digits.end());
            return v;
        }
        return digits;
    }
};