#include <iostream>
 
int main() 
{
    using namespace std;
    
    int segundos, horas, minutos;
    
    cin >> segundos;
    
    horas = (int)segundos/3600; segundos -= horas*3600;
    minutos = (int)segundos/60; segundos -= minutos*60;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
 
    return 0;
}
