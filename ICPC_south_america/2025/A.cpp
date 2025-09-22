#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, aux1, count = 0;
    cin >> n >> m;
    vector<int> v(m, 0);
    for(int i = 0; i < n; i++){
        aux1 = 0;
        for(int j = 0; j < m; j++){
            cin >> aux1;
            if(aux1 > v[j]) v[j] = aux1;
        }
    }
    for(int i = 0; i < m; i++){
        count += v[i];
    }
    cout << count << "\n";
    return 0;
}