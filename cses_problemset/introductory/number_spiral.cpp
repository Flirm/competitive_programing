#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll t,x,y; 
    cin >> t;
    ll target;
    for(int i = 0; i < t; i++){
        cin >> y >> x;

        if(x>=y){
            if(x&1){
                target = x*x - (y-1);
            }
            else{
                target = (x-1)*(x-1) + 1 + (y-1);
            }
        }
        else{
            if(y&1){
                target = (y-1)*(y-1) + 1 + (x-1);
            }
            else{
                target = y*y - (x-1);
            }
        }

        cout << target << "\n";
    }

    return 0;
}