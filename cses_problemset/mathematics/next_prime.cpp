#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(ll x){
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    if (x % 3 == 0) return x == 3;

    for (ll i = 5; i * i <= x; i += 6){
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }
    return true;
}

int main(){
    int t;
    ll n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n==1){
            cout << "2\n";
            continue;
        }
        n += (!(n&1)) ? 1 : 2;
        while(true){
            if(isPrime(n)){
                cout << n << "\n";
                break;
            }
            n += 2;
        }
    }

}