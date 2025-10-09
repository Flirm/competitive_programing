#include <iostream>
 
int main() 
{
    using namespace std;
    
    int tempo, vel;
    double litros;
    
    cin >> tempo >> vel;
 
    litros = (tempo * vel)/12.0;
 
    cout << fixed; 
    cout.precision(3);
    cout << litros << endl;
    
    return 0;
}
