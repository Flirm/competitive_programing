#include <iostream>
 
int main() 
{
    using namespace std;
    
    int par = 0, num;
    
    for(int i = 0; i <5; i++)
    {
        cin >> num;
        if(num%2 == 0)
        {
            par++;
        }
    }
    
    cout << par << " valores pares" << endl;
    
    return 0;
}
