#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++){cin >> v[i];}
    sort(v.begin(), v.end());
    while(q--){
        int a, b;
        cin >> a >> b;  
        auto it_b = lower_bound(v.begin(),v.end(),b);
        auto it_a = lower_bound(v.begin(),v.end(),a);
        int res;
        if(it_b == v.end()){
            if(it_a == v.end()){
                res = 0;
            }
            else{
                res = n-(it_a-v.begin());
            }
        }
        else{
            while(*it_b > b) it_b--;
            res = it_b-it_a+1;
        }
        cout << res << "\n";
    }
    return 0;
}