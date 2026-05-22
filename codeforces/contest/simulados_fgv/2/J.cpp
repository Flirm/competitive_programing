#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    map<char, int> d{{'E',0}, {'C',1}, {'D',2}};
    int pos = 1, ans = 0;
    for(int i = 0; i < n; i++){
        if(d[c[i]]==pos){
            ans++;
        }
        else if(abs(pos-d[c[i]]) > 1){
            if(i < n-1){
                int dir = pos-d[c[i+1]];
                if(dir < 0) pos = max(2, pos+1);
                else if(dir > 0) pos = min(0, pos-1);
            }
        }
        else{
            ans++;
            pos = d[c[i]];
        }
    }
    cout << ans << "\n";
    return 0;
}