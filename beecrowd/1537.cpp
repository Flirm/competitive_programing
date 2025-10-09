#include <iostream>

using namespace std;

int main()
{
    int N;
    long long result;
    cin >> N;
    while(N)
    {
        result = 1;
        while(N>3)
        {
            result *= N;
            result = result%1000000009;
            N--;
        }
        cout << result%1000000009 << endl;
        cin >> N;
    }
    return 0;
}
