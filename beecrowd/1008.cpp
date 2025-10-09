#include <iostream>
 
int main() 
{
    using namespace std;
    
    int a, b;
    float c;
    cin >> a;
    cin >> b;
    cin >> c;
    float salario = b * c;
    cout << "NUMBER = " << a << endl;
    cout << fixed;
    cout.precision(2);
    cout << "SALARY = U$ " << salario << endl;
    
    return 0;
}
