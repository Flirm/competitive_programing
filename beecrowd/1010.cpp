#include <iostream>
 
int main() 
{
    using namespace std;
    
    int cod, num;
    double preco, total = 0;
    
    for(int i = 0; i < 2; i++)
    {
        cin >> cod;
        cin >> num;
        cin >> preco;
        total += preco * num;
    }
    
    cout << fixed;
    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}
