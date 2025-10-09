#include <iostream>
 
int main() 
{
    using namespace std;
    
    int km;
    double gasto, consumo;
 
    cin >> km; cin >> gasto;
    
    consumo = km/gasto;
    
    cout << fixed;
    cout.precision(3);
    cout << consumo << " km/l" << endl;
    
    return 0;
}
