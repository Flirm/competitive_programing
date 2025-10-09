#include <iostream>

using namespace std;
 
int main() 
{
    int n, num, selector; cin >> n;
    int vec[n];
    for(int i = 0; i < n; i++)
    {
        selector = 0;
        //iqual a 0: 0
        //menor q zero 0
        //par 1 impar 2
        //maior q zero 2
        //par 3 impar 4
        cin >> num;
        if(num == 0){vec[i] = 0; continue;}
        selector += (num<0) ? 0:2;
        selector += (num%2==0) ? 1:2;
        vec[i] = selector;
    }
    for(int i = 0; i < n; i++)
    {
        switch(vec[i])
        {
            case 0:
                cout << "NULL" << endl;
                break;
            case 1:
                cout << "EVEN NEGATIVE" << endl;
                break;
            case 2:
                cout << "ODD NEGATIVE" << endl;
                break;
            case 3:
                cout << "EVEN POSITIVE" << endl;
                break;
            case 4:
                cout << "ODD POSITIVE" << endl;
                break;
        }
    }
    return 0;
}
