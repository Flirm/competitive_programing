#include <iostream>
#include <string>

using namespace std;

int compare(string str1, string str2);

int main()
{
    int N;
    cin >> N;
    string str;

    for(; N > 0; N--)
    {
        cin >> str;
        if(str.length() == 3)
        {
            if(compare(str, "one") < 2) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else cout << 3 << endl;
    }


    return 0;
}

int compare(string str1, string str2)
{
    int diff = 0;
    for(size_t i = 0; i < str1.length(); i++)
    {
        if(str1[i] != str2[i])
            diff++;
    }
    return diff;
}