#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int big = 1;
    int curr = 0;
    char last = s[0];
    for(size_t i = 0; i < s.length(); i++){
        if (s[i] == last){
            curr++;
            big = max(big, curr);
        }
        else{
            curr = 1;
            last = s[i];
        }
    }
    cout << big << "\n";
    return 0;
}