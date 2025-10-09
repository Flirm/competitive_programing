#include <iostream>
#include <set>
#define ll long long

using namespace std;

long long fib(long long n)
{
    ll f[n + 2]; // 1 extra to handle case, n = 0
    ll i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main()
{
    ll a, b;
    set<long long> fibnums;
    int result;
    long long nextFib = 1;
    cin >> a >> b;
    while(a && b)
    {
        result = 0;
        if(*(fibnums.end()) < b)
        {
            long long fibresult = 0;
            while(fibresult <= b){
                fibresult = fib(nextFib);
                fibnums.insert(fibresult);
                nextFib++;
            }
        }
        set<long long>::iterator itr;
        for(itr = fibnums.begin(); itr != fibnums.end(); itr++)
        {
            if(*itr >= a && *itr <= b) result++;
        }
        cout << result << endl;
        cin >> a >> b;
    }

    return 0;
}
