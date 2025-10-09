#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin, str)){
        bool isLower = false;
        for(size_t i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]) && !isLower){
                isLower = !isLower;
                cout << (char)toupper(str[i]);
            }
            else if(isalpha(str[i]) && isLower){
                isLower = !isLower;
                cout << (char)tolower(str[i]);
            }
            else
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}