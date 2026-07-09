#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    n *= 8;
    n /= m;
    n = floor(n);
    cout << n << endl;
    return 0;
}