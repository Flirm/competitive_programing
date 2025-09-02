#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    unordered_set<int> s;
    cin >> n;
    for(int i = 1; i <= n; i++){
        s.insert(i);
    }
    for(int i = 1; i < n; i++){
        cin >> x;
        s.erase(x);
    }
    cout << *s.begin() << "\n";
    return 0;
}