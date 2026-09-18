#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, max_sum, end, curr; 
    cin >> n;
    cin >> max_sum; end = max_sum;
    for(int i = 1; i < n; i++){
        cin >> curr;
        end = max(curr, end + curr);
        max_sum = max(max_sum, end);
    }
    cout << max_sum << "\n";

    return 0;
}