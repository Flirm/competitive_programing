#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int prefix = 0, min_prefix = 0, index = 0;
        for(size_t i = 0; i < s.size(); i++){
            prefix += (s[i] == 'B' ? 1 : -1);
            if(prefix < min_prefix){
                index = i+1;
                min_prefix = prefix;
            }
        }
        cout << index << "\n";
    }
    return 0;
}