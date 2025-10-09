#include <iostream>
 
using namespace std;
 
int main() 
{
    double a, b, percent;
    
    cin >> a >> b;
    percent = (b-a)*(100/a);
    
    cout << fixed; cout.precision(2);
    cout << percent << "%" << endl;

 
    return 0;
}
