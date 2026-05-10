#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> v(n); // v[i] = no de prefix com resto i
    ll sum = 0;
    v[sum] = 1;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum = (sum + a%n + n) % n;
        v[sum]++;
    }
    ll res = 0;
    for(ll a : v){
        // combinação de a escolhe 2, nos da os pares distintos com mesmo resto
        // como prefix(i,j) = prefix(0,j)-prefix(0,i-1)
        // queremos todos os pares de msm prefix para que prefix(i,j)=0, ou seja, divisivel por n
        res += a * (a-1) / 2;
    }
    cout << res << "\n";
    return 0;
}