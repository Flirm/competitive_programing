#include <iostream>
 
int main() 
{
    using namespace std;
    
    double num; cin >> num;
    int select = 0;
    
    select += ((num <= 25) && (num >= 0)) ? 1 : 0;
    select += ((num <= 50) && (num > 25)) ? 2 : 0;
    select += ((num <= 75) && (num > 50)) ? 3 : 0;
    select += ((num <= 100) && (num > 75)) ? 4 : 0;
    
    switch(select)
    {
        case 0:
            cout << "Fora de intervalo\n";
            break;
        case 1:
            cout << "Intervalo [0,25]\n";
            break;
        case 2:
            cout << "Intervalo (25,50]\n";
            break;
        case 3:
            cout << "Intervalo (50,75]\n";
            break;
        case 4:
            cout << "Intervalo (75,100]\n";
            break;
    }
    
    return 0;
}
