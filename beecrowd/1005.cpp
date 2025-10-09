#include <iostream>
 
int main() {
 
    using namespace std;
    
    double a, b, media;
    cin >> a;
    cin >> b;
    media = (a*3.5 + b*7.5)/11;
    cout << fixed;
    cout.precision(5);
    cout << "MEDIA = " << media << endl;
 
    return 0;
}
