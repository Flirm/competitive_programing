#include <iostream>
using namespace std;

int main()
{
    double r;
    double area;
    double pi = 3.14159;
    cin >> r;
    area = pi * (r * r);
    cout << fixed;
    cout.precision(4);
    cout << "A=" << area << endl;
    return 0;
}
