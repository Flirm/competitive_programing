#include <bits/stdc++.h>

using namespace std;

int main(){
    int16_t n, m;
    cin >> n;
    vector<string> dict;
    vector<pair<int16_t, int16_t>> dictPos;
    
    //dicionario
    for(int16_t i = 0; i < n; i++){
        string aux;
        pair<int16_t, int16_t> a;
        cin >> aux >> a.first >> a.second;
        dict.push_back(aux);
        dictPos.push_back(a);
    }
    cin >> m;
    vector<string> v(m);
    //base do conhecimento
    for(int16_t i = 0; i < m; i++){
        cin >> v[i];
    }
    int16_t q, k_original, f;
    cin >> q >> k_original;
    
    //consultas
    for(int16_t i = 0; i < q; i++){
        vector<string> con;
        int16_t k = k_original;
        cin >> f;
        for(int16_t j = 0; j < f; j++){
            string aux;
            cin >> aux;
            con.push_back(aux);
        }

        //encontrando palavras candidatas
        pair<int, string> next = {INT_MIN,"*"};
        vector<string> cand;
        
        while(k > 0){
            if(f < k) {
                k--;
                continue;
            }
            vector<string> last_k_con(con.end() - k, con.end());
            
            //olhando as ultimas k palavras da consulta
            for(int16_t p = 0; p <= m - k; p++){
                if(k + p >= m) continue;
                
                //checando se as ultimas k palavras estão presentes na base do conhecimento na ordem dada
                vector<string> base(v.begin() + p, v.begin() + p + k);
                if(base == last_k_con){
                    cand.push_back(v[k + p]);
                }
            }

            //se encontramos candidatas, calcular palavra mais similar no dicionario
            if(!cand.empty()){
                for(int16_t p = 0; p < n; p++){
                    int s = 0;
                    for(size_t r = 0; r < cand.size(); r++){
                        auto it = find(dict.begin(), dict.end(), cand[r]);
                        if(it != dict.end()){
                            int x = it - dict.begin();
                            if(x >= 0 && x < n) {
                                s += dictPos[p].first * dictPos[x].first + dictPos[p].second * dictPos[x].second;
                            }
                        }
                    }
                    if(next.first < s){
                        next.first = s;
                        next.second = dict[p];
                    }
                }
                break;
            }
            k--;
        }

        //print resultado
        for(auto word : con){
            cout << word << " ";
        }
        cout << next.second << "\n";
    }
    return 0;
}