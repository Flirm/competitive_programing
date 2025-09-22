#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    int x;
    for(int i = 0; i < 10; i++){
        cin >> x;
        s.insert(x);
    }
    cout << max(abs(4 - (int) s.size()), 0) << "\n";
    return 0;
}