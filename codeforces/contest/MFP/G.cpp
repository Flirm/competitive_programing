#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
int main(){
    ll n; cin >> n;
    if(n%3 == 0){
        cout << "PERDE" << endl;
    }
    else{
        cout << "GANHA" << endl;
    }
    return 0;
}