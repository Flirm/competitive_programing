#include <iostream>
#include <cmath>
 
int main() 
{
    using namespace std;
    
    int a, b, c, maior;
    cin >> a; cin >> b; cin >> c;
    
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;
    
    cout << maior << " eh o maior" << endl;
 
    return 0;
}
