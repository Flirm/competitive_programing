#include <stdio.h>
#include <iostream>
#include <stack>
#include <limits>

using namespace std;
 

int main() 
{
    int numVag, permut;

    cin >> numVag;

    while(numVag)
    {
        cin >> permut;

        while(permut)
        {
        	stack<int> original, station;

            for(int i = numVag; i > 0; i--)
                original.push(i);

            while(original.top() != permut)
            {
                station.push(original.top());
                original.pop();
            }
            original.pop();

            for(int i = 1; i < numVag; i++)
            {
                cin >> permut;
                if(!station.empty())
                {
                    int top = station.top();
                    if(permut == top)
                        station.pop();
                    else if(permut < station.top())
                    {
                        break;
                    }
                    else
                    {
                        while(original.top() != permut)
                        {
                            station.push(original.top());
                            original.pop();
                        }
                        original.pop();
                    }
                }
                else
                {
                    while(original.top() != permut)
                    {
                        station.push(original.top());
                        original.pop();
                    }
                    original.pop();
                }

            }
            if(original.empty() && station.empty())
            {
                cout << "Yes" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                cout << "No" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cin >> permut;

        }
        cout << endl;
        cin >> numVag;
    }

 
    return 0;
}
