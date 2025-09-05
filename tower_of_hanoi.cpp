#include <bits/stdc++.h>

using namespace std;

void solve(int n, int from, int to, int aux, vector<pair<int,int>>* v, int* count){
    if(!n){
        return;
    }
    *count += 1;
    solve(n-1, from, aux, to, v, count);
    v->push_back(make_pair(from, to));
    solve(n-1, aux, to, from, v, count);
}

int main(){
    int n;
    cin >> n;
    int count = 0;
    vector<pair<int,int>>* v = new vector<pair<int,int>>;
    solve(n, 1, 3, 2, v, &count);
    cout << count << "\n";
    for(auto i : *v){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}
