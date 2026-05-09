#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n, l, x, y;
    cin >> n;
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> l;
        vector<int> v2(l);
        for(int j = 0; j < l; j++){
            cin >> v2[j];
        }
        v[i] = v2;
    }
    cin >> x >> y;
    cout << v[x-1][y-1] << "\n";
    return 0;
}