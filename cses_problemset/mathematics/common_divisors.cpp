#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(2000000, 0);
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        v[t]+=1;
    }
    for(int i = 1000000; i > 0; i--){
        int count = 0;
        for(int j = i; j <= 1000000; j+=i){
            count += v[j];
        }
        if(count > 1){
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}