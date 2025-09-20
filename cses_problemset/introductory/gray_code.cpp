#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> base = {"0", "1"};
    if(n>1){
        for(int i = 0; i < n-1; i++){
            vector<string> aux = base;
            for(size_t j = 0; j < base.size(); j++){
                base[j] = "0" + base[j];
                aux[j] = "1" + aux[j];
            }
            reverse(aux.begin(), aux.end());
            base.insert(base.end(), aux.begin(), aux.end());
        }
    }
    for(auto i: base){
        cout << i << "\n";
    }
    return 0;
}