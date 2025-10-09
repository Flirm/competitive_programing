#include <iostream>

using namespace std;
 
int main() 
{
    int n, i = 0; cin >> n;
    double media = 0;
    
    while(n >= 0)
    {
        media += n;
        i++;
        cin >> n;
    }
    
    media = media/i;
    
    cout << fixed; cout.precision(2);
    cout << media << endl;
    
    return 0;
}
