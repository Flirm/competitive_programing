#include <iostream>
 
int main() 
{
    using namespace std;
    
    int n, total, nCem, nCinquenta, nVinte, nDez, nCinc, nDois, nUm;
    cin >> n;
    total = n;
    
    nCem = (int)n/100; n -= nCem*100;
    nCinquenta = (int)n/50; n -= nCinquenta*50;
    nVinte = (int)n/50; n -= nVinte*20;
    nDez = (int)n/10; n -= nDez*10;
    nCinc = (int)n/5; n -= nCinc*5;
    nDois = (int)n/2; n -= nDois*2;
    nUm = (int)n;
    
    cout << total << endl;
    cout << nCem << " nota(s) de R$ 100,00" << endl;
    cout << nCinquenta << " nota(s) de R$ 50,00" << endl;
    cout << nVinte << " nota(s) de R$ 20,00" << endl;
    cout << nDez << " nota(s) de R$ 10,00" << endl;
    cout << nCinc << " nota(s) de R$ 5,00" << endl;
    cout << nDois << " nota(s) de R$ 2,00" << endl;
    cout << nUm <<  " nota(s) de R$ 1,00" << endl;
     
    return 0;
}
