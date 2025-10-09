#include <iostream>
 
int main()
{
    using namespace std;
    
    int num; cin >> num;
    
    for(int i = num-1; i > 0; i--)
    {
        num = num*i;
    }
    
    cout << num << endl;
 
    return 0;
}
