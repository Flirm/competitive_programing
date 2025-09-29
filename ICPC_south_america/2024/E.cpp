#include <bits/stdc++.h>

using namespace std;

bool eval(int ul, int ur, int dl, int dr){
    if(ul < dl && ul < ur && dl < dr && ur < dr)
        return true;
    return false;
}


int main(){
    int n, ul, ur, dl, dr;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!i){
                if(!j){
                    cin >> ul;
                }
                else{
                    cin >> ur;
                }
            }
            else{
                if(!j){
                    cin >> dl;
                }
                else{
                    cin >> dr;
                }
            }
        }
    }

    int rots = 0;
    bool ok = eval(ul, ur, dl, dr);
    while(!ok){
        int t = ul; 
        ul = ur; ur = dr; dr = dl; dl = t;
        ok = eval(ul, ur, dl, dr);
        rots++;
    }

    cout << rots << "\n";

    return 0;
}