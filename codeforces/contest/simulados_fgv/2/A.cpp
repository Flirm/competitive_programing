#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
    int n, c;
    cin >> n >> c;
    vector<ll> h(n), sufix(n+1);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    for(int i = 0; i < c; i++){
        int m, a;
        cin >> m >> a;
        sufix[m-1] = a;
    }
    for(int i = n-1; i >= 0; i--){
        sufix[i] += sufix[i+1];
    }
    h[0] += sufix[0];
    stack<ll> s; s.push(h[0]);
    for(int i = 1; i < n; i++){
        h[i] += sufix[i];
        cout << s.size() << "\n";
        while(!s.empty() && h[i] >= s.top()){
            s.pop();
        }
        s.push(h[i]);
    }
    return 0;
}