#include <iostream>
 
int main() 
{
    using namespace std;
    
    int num, par, imp, neg, pos;
    par = imp = neg = pos = 0;
    
    for(int i = 0; i < 5; i ++)
    {
        cin >> num;
        if(num > 0)
        {
            pos++;
        }
        else if(num < 0)
        {
            neg++;
        }
        
        if(num%2 == 0)
        {
            par++;
        }
        else
        {
            imp++;
        }
    }
    
    cout << par << " valor(es) par(es)" << endl;
    cout << imp << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;
    
    return 0;
}
