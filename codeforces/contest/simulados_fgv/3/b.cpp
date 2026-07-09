#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    int total = 0;
    int custo = c+k;
    int last_buy = 0;
    for(int i = 1; i < n; i++){
        if(custo + c + k > (d[i]-d[last_buy]+1)*c + k){
            custo = (d[i]-d[last_buy]+1)*c + k;
        }
        else{
            total += custo;
            custo = c+k;
            last_buy = i;
        }
    }
    total += custo;
    cout << total << endl;
    return 0;
}