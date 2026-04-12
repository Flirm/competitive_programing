#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    string gridLine;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> dict = {"A", "B", "C", "D"};

    for(int i = 0; i < n; i++){
        string newGridLine = "";
        getline(cin, gridLine);
        for(int j = 0; j < m; j++){
            int index;
            if(i&1){
                if(j&1){
                    index = gridLine[j] == 'A' ? 2 : 0;
                }
                else{
                    index = gridLine[j] == 'B' ? 3 : 1;
                }
            }
            else{
                if(j&1){
                    index = gridLine[j] == 'B' ? 3 : 1; 
                }
                else{
                    index = gridLine[j] == 'A' ? 2 : 0; 
                }
            }

            newGridLine += dict[index];
        }
        cout << newGridLine << endl;
    }


    return 0;
}