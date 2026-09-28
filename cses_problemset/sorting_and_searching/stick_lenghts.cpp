#include <bits/stdc++.h>

using namespace std;

long long get_cost(int index, vector<int> &v){
    long long cost = 0, target = v[index];
    for(auto value : v){
        cost += abs(target - value);
    }
    return cost;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int index = n>>1;
    long long min_cost;
    if(n&1){
        min_cost = get_cost(index, v);
    }
    else{
        min_cost = min(get_cost(index, v), get_cost(index - 1, v));
    }

    cout << min_cost << "\n";

    return 0;
}