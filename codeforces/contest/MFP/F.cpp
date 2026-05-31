#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    double res = 1, pos = 1;
    for (int i = 0; i < n; i++) {
        pos *= min((double)1, (double)(k-1)/v[i]);
    }   
    res -= pos;
    cout << fixed << setprecision(10) << res << endl;

    return 0;
}