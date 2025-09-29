#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin >> n;
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        int k = 1;
        while(k <= x){
            if(k&x) ms.insert(k);
            k <<= 1;
        }
    }

    vector<int> v;

    for(int i = 0; i < n; i++){
        int num = 0;
        
        auto it = ms.begin();
        while(it != ms.end()) {
            if(ms.empty()) break;
            int current = *it;
            num += current;    
            it = ms.erase(it); 
            it = ms.upper_bound(current);
        }
        
        v.push_back(num);
    }

    for(auto i : v){
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}