#include <iostream>
#include <bits/stdc++.h>

int main() 
{
    using namespace std;
    
    int a, b, c; cin >> a >> b >> c;
    int val[3] = {a, b, c};
    
    sort(val, val + 3);
    
    cout << val[0] << endl << val[1] << endl << val[2] << endl << endl;
    cout << a << endl << b << endl << c << endl;
    
    return 0;
}
