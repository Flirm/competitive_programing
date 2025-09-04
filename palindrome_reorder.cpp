#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, s2 = "";
    unordered_map<char, int> m;
    cin >> s;
    for(auto i:s){
        if(m.find(i) == m.end()){
            m.insert(make_pair(i, 1));
        }
        else{
            m[i]++;
        }
    }

    if(s.length()%2){
        pair<bool,char> a = {false, ' '};
        for(auto i:m){
            if(i.second%2){
                if(!a.first){
                    a.first = true;
                    a.second = i.first;
                }
                else{
                    cout << "NO SOLUTION\n";
                    return 0;
                }
                
            }
            s2.append(i.second/2, i.first);
        }
        string sAux = s2;
        s2 += a.second;
        reverse(sAux.begin(), sAux.end());
        s2 += sAux;
        cout << s2 << "\n";
    }
    else{
        for(auto i:m){
            if(i.second%2){
                cout << "NO SOLUTION\n";
                return 0;
            }
            s2.append(i.second/2, i.first);
        }
        string sAux = s2;
        reverse(sAux.begin(), sAux.end());
        s2 += sAux;
        cout << s2 << "\n";
    }
    return 0;
} 