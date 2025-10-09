#include <iostream>
 
int main() 
{
    using namespace std;
    
    int cod, quant; cin >> cod >> quant;
    double total, lanches[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    
    total = lanches[cod-1] * quant;
    
    cout << fixed;
    cout.precision(2);
    cout << "Total: R$ " << total << endl;
    
    return 0;
}
