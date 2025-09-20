#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;

    set<ll> s1, s2;
    ll c1, c2;
    c1 = c2 = 0;

    for(int i = n; i > 0; i--){
        if(c1 <= c2){
            s1.insert(i);
            c1 += i;
        }
        else{
            s2.insert(i);
            c2 += i;
        }
    }
    
    if(c1 != c2){cout<< "NO\n"; return 0;}

    cout<<"YES\n";

    cout << s1.size() << "\n";
    for(auto i : s1){
        cout << i << " ";
    }
    cout << "\n" << s2.size() << "\n";
    for(auto i : s2){
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}