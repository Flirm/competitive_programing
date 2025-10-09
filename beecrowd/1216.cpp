#include <iostream>

using namespace std;
 
int main() 
{
    string name;
    int dist, i = 0;
    double media = 0;
    
    while(getline(cin, name))
    {
        cin >> dist;
        cin.ignore();
        media += dist;
        i++;
    }
    
    cout << fixed; cout.precision(1);
    cout << media/i << endl;

    return 0;
}
