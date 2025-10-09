#include <iostream>
 
int main() 
{
    using namespace std;
    
    double r, pi = 3.14159;
    
    cin >> r;
    
    double v = (4/3.0) * pi * (r*r*r);
    
    cout << fixed;
    cout.precision(3);
    cout << "VOLUME = " << v << endl;
    
    return 0;
}
