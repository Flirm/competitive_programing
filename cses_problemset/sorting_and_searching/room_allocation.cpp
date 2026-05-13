#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<array<int,3>> pq;
    vector<int> rooms(n);
    deque<int> dq(n);
    iota(dq.begin(), dq.end(), 1);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        pq.push({-a, 1, i});
        pq.push({-b, 0, i});
    }
    int saldo = 0, max_rooms = 0;
    while(!pq.empty()){
        auto [day, type, index] = pq.top();
        pq.pop();
        if(type == 1){
            saldo++;
            max_rooms = max(saldo, max_rooms);
            rooms[index] = dq.front(); dq.pop_front();
        }
        else{
            saldo--;
            dq.push_front(rooms[index]);
        }
    }
    cout << max_rooms << "\n";
    for(auto r : rooms){
        cout << r << " ";
    } cout << "\n";
}