#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int N, len;
    string str;

    while(cin >> N)
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        for(; N > 0; N--)
        {
            getline(cin, str);
            len = str.length();
            for(int i = len - 1; i >= 0 ; i--)
            {
                if(isalpha(str[i])) str[i] = str[i] + 3;
                if(len - i - 1 >= len/2) str[i] = str[i] - 1;
                cout << str[i];
            }
            cout << endl;
        }
    }
}
