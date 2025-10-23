#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b){
        int i = 0, cIn = 0, aux = 0;
        string res;
        while(i < a.size() || i < b.size() || cIn){
            aux = cIn;
            aux += i < a.size() ? a[a.size()-(i+1)]-'0' : 0;
            aux += i < b.size() ? b[b.size()-(i+1)]-'0' : 0;
            cIn = aux&2 ? 1 : 0;
            res = (char)((aux%2) + '0') + res;
            i++;
        }
        return res;
    }
};