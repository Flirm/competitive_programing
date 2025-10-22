#include <bits/stdc++.h>

using namespace std;

string largest(string s){
    if(s.size() < 2) return s;
    string largest = s.substr(0,1);
    vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));//dp[i][j] = is palindrome using char from index i to index j
    for(int i = 0; i < s.size(); i++){
        dp[i][i] = true;
        for(int j = 0; j < i; j++){
            if(s[i] == s[j] && (i-j <= 2 || dp[j+1][i-1])){
                dp[j][i] = true;
                if(i-j+1 > largest.size()){
                    largest = s.substr(j, i-j+1);
                }
            }
        }
    }
    
    return largest;
}


int main(){
    string s = "ababadad";

    cout << largest(s) << endl;

    return 0;
}