#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> p(n+1, {1,1});
    for(int i = 1; i <= n; i++){
        p[i].first = p[i-1].second;
        p[i].second = p[i-1].first + p[i-1].second;
    }
    cout << p[n].first << "\n";

    return 0;
}