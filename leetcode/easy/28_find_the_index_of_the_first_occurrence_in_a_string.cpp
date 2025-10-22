#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = 0, s = 0;
        if(needle.size() > haystack.size()) return -1;
        while(s <= haystack.size()-needle.size()){
            if(haystack[l] == needle[l-s]){
                l++;
                if(l - s == needle.size()) return s;
            }
            else {s++; l=s;}
        }
        return -1;
    }
};