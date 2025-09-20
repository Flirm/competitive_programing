#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1){cout << "1\n"; return 0;}
    if(n <= 3){
        cout << "NO SOLUTION\n";
        return 0;
    }
    deque<int> d = {2, 4, 1, 3};

    for(int i = 5; i <= n; i++){
        if(i&1){
            d.push_back(i);
        }
        else{
            d.push_front(i);
        }
    }

    for(auto i: d){ 
        cout << i << " "; 
    }
    cout << "\n";

    return 0;
}