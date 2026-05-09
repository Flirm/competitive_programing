#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n, x; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> x;
    cout << v[x-1] << "\n";
    return 0;
}