#include <iostream>

using namespace std;
 
int main() 
{
    double num; cin >> num;
    
    cout << fixed; cout.precision(4);
    cout << scientific << showpos << uppercase << num << endl;
 
    return 0;
}
