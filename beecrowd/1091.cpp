#include <iostream>

using namespace std;
 
int main() 
{
    int k, n, m, x, y, select;
    cin >> k; 

    while(k != 0)
    {
        cin >> n >> m; 

        for(int i = 0; i < k; i++)
        {
            select = 0;
            cin >> x >> y;
            
            if(x == n || y == m){cout << "divisa\n"; continue;}
            select += (y > n) ? 0 : 2;
            select += (x > m) ? 1 : 0;
            switch(select)
            {
                case 0:
                    cout << "NE\n";
                    break;
                case 1:
                    cout << "NO\n";
                    break;
                case 2:
                    cout << "SE\n";
                    break;
                case 3:
                    cout << "SO\n";
                    break;
            }
        }
        cin >> k;
    }

    return 0;
}
