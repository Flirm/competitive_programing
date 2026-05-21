#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, a, aux;
    cin >> t;
    int vit_more = 0, vit_less = 0;
    for(int i = 0; i < t; i++){
        cin >> n >> a;
        vit_more = 0; vit_less = 0;
        for(int j = 0; j < n; j++){
            cin >> aux;
            if(abs(a-aux) > abs((a+1)-aux)){
                vit_more++;
            }
            if(abs(a-aux) > abs((a-1)-aux)){
                vit_less++;
            }
        }
        int better_strat = max(vit_more, vit_less);
        if(!better_strat) cout << a << "\n";
        else if(vit_more == better_strat) cout << a+1 << "\n";
        else cout << a-1 << "\n";
    }
    return 0;
}