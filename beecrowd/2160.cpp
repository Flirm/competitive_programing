#include <iostream>

using namespace std;

int main()
{
    string frase;
    getline(cin, frase);

    if(frase.size() > 80)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
