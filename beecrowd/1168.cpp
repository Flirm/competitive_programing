#include <iostream>
#include <string>

using namespace std;

int getValue(int num)
{
    switch(num)
    {
        case 0: return 6;
        case 1: return 2;
        case 2: return 5;
        case 3: return 5;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 3;
        case 8: return 7;
        case 9: return 6;
    }
    return 0;
}

int main()
{
    int N, sum;
    cin >> N;
    string str;


    for(; N > 0; N--)
    {

        cin >> str;
        sum = 0;
        for(size_t i = 0; i < str.length(); i++)
        {
            sum += getValue(str[i] - '0');
        }
        cout << sum << " leds" << endl;
    }

    return 0;
}
