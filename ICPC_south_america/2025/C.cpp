#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, steps = 0;
    string s;

    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    x = stoi(s, nullptr, 2);
    while(x != 1){
        steps++;
        if(x&1){
            x = (x<<1)^(x-1);
        }
        else{
            x>>=1;
        }
    }
    cout << steps << "\n";
    return 0;
}