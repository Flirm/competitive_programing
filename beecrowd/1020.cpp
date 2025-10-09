#include <iostream>
 
int main() 
{
    using namespace std;
    
    int dias, anos, meses;
    cin >> dias;
    
    anos = (int)dias/365; dias -= anos*365;
    meses = (int)dias/30; dias -= meses*30;
    
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
 
    return 0;
}
