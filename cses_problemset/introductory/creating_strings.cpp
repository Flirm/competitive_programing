#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    set<string> s;
    long long count = 0;
    sort(n.begin(), n.end());
    do{ 
        count++;
        s.insert(n);
    }while(next_permutation(n.begin(), n.end()));
    cout << count << "\n";
    for(auto i : s){
        cout << i << "\n";
    }
    return 0;
}