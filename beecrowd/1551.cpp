#include <iostream>
#include <string>
#include <limits>

using namespace std;

int getDifferentLetters(string str);

int main()
{
    int N, num;
    cin >> N;
    string str;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    for(; N > 0; N--)
    {
        getline(cin, str);
        num = getDifferentLetters(str);
        if(num < 13)
            cout << "frase mal elaborada" << endl;
        else if(num < 26)
            cout << "frase quase completa" << endl;
        else
            cout << "frase completa" << endl;
    }

    return 0;
}

int getDifferentLetters(string str)
{
    int diff = 0;
    bool letters[26] = {false};
    for(size_t i = 0; i < str.length(); i++)
    {
        if(isalpha(str[i]))
        {
            if(!letters[tolower(str[i]) - 'a'])
            {
                letters[tolower(str[i]) - 'a'] = true;
                diff++;
            }
        }
    }
    return diff;
}