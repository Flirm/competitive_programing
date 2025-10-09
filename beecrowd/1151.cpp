#include <iostream>

using namespace std;
 
int main() 
{
    int num, a = 0, b = 1, next = 0; cin >> num;
    
    for(int i = 1; i <= num; i++)
    {
        if(i==1)
        {
            cout << a;
            if(i != num){cout << " ";}
            continue;
        }
        else if(i == 2)
        {
            cout << b;
            if(i != num){cout << " ";}
            continue;
        }
        
        next = a+b;
        a = b;
        b = next;
        
        cout << next;
        if(i != num){
            cout << " ";
            continue;
        }
        cout << endl;
        
    }
 
    return 0;
}
