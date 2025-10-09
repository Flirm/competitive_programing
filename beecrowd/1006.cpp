#include <iostream>
 
int main() 
{
    using namespace std;
    
    double a, b, c, media;
    cin >> a;
    cin >> b;
    cin >> c;
    media = (a*2 + b*3 + c*5)/10;
    cout << fixed;
    cout.precision(1);
    cout << "MEDIA = " << media << endl;
 
    return 0;
}
