#include <iostream>
#include <cmath> 
 
int main() 
{
    using namespace std;
    
    double a, b, c, delta, r1, r2;
    
    cin >> a >> b >> c;
    
    delta = (b*b) - (4*a*c);
    if((delta < 0) || (a == 0))
    {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    
    delta = sqrt(delta);
    r1 = ((-1*b) + delta)/(2*a);
    r2 = ((-1*b) - delta)/(2*a);
    
    cout << fixed;
    cout.precision(5);
    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl;
 
    return 0;
}
