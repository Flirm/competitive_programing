#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int v[3];
    cin >> v[0] >> v[1] >> v[2];
    sort(v, v+3);
    if(v[2]-v[0] >= 10){
        cout << "check again\n";
        return 0;
    }
    cout << "final " << v[1] << "\n";
    return 0;
}