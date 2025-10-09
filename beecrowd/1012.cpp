#include <iostream>
 
int main() 
{
    using namespace std;
    
    double a, b, c, tri, circ, trap, quad, ret;
    
    cin >> a; cin >> b; cin >> c;
    
    tri = (a * c)/2.0;
    circ = 3.14159 * (c*c);
    trap = ((a+b)*c)/2.0;
    quad = b*b;
    ret = a*b;
    
    cout << fixed;
    cout.precision(3);
    cout << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << circ << endl;
    cout << "TRAPEZIO: " << trap << endl;
    cout << "QUADRADO: " << quad << endl;
    cout << "RETANGULO: " << ret << endl;
 
    return 0;
}
