#include <iostream>
 
int main() 
{
    using namespace std;
    
    string nome;
    double salario, montante;
    
    cin >> nome;
    cin >> salario;
    cin >> montante;

    montante = montante * 15/100;
    double total = salario + montante;
    
    cout << fixed;
    cout.precision(2);
    cout << "TOTAL = R$ " << total << endl;
    
    return 0;
}
