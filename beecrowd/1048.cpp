#include <iostream>
 
using namespace std;

int main() 
{
    double num, plus; cin >> num;
    int percent;
    
    cout << fixed;
    cout.precision(2);
    
    if(num > 2000)
    {
        plus = (num*4)/100;
        num += plus;
        percent = 4;
    }
    else if(num > 1200)
    {
        plus = (num *7)/100;
        num += plus;
        percent = 7;
    }
    else if(num > 800)
    {
        plus = num/10;
        num += plus;
        percent = 10;
    }
    else if(num > 400)
    {
        plus = (num*12)/100;
        num += plus;
        percent = 12;
    }
    else
    {
        plus = (num*15)/100;
        num += plus;
        percent = 15;
    }
 
    cout << "Novo salario: " << num << endl;
    cout << "Reajuste ganho: " << plus << endl;
    cout << "Em percentual: " << percent << " %" << endl;
        
    return 0;
}
