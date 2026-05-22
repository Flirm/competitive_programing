#include <bits/stdc++.h>

using namespace std;

int main(){
    string f, s;
    cin >> f >> s;
    int hf = stoi(f.substr(0,2)), hs = stoi(s.substr(0,2));
    int mf = stoi(f.substr(3,2)), ms = stoi(s.substr(3,2));
    int hdiff = hf-hs, mindiff = mf-ms;
    if(mindiff < 0){
        mindiff+=60;
        hdiff--;
    }
    
    cout << setw(2) << setfill('0') << hdiff << ":" << setw(2) << setfill('0') << mindiff << "\n";
    return 0;
}