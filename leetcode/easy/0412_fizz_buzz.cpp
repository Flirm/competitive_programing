#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        ans[0] = "1";
        for(int i = 2; i <= n; i++){
            ans[i-1] = (i%3) ? ((i%5) ? to_string(i) : "Buzz") : ((i%5) ? "Fizz" : "FizzBuzz");
        }
        return ans;
    }
};
