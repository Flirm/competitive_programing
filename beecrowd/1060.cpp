#include <iostream>
 
int main() {
    
    using namespace std;
    
    int pos, num;
    
    for(int i = 0; i < 6; i++)
    {
        cin >> num;
        if(num > 0)
        {
            pos++;
        }
    }
    
    cout << pos << " valores positivos" << endl;
    
    return 0;
}
