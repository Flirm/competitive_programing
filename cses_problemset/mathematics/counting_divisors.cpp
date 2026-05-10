#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;

    vector<int> divs(1000001,0);
    for(int i = 1; i < 1000001; i++){
        for(int j = i; j < 1000001; j+=i){
            divs[j]+=1;
        }
    }

    while(n--){
        cin >> x;
        cout << divs[x] << "\n";
    }

    return 0;
}