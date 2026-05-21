#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
    
    // creation of boolean array
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            
            // marking as false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    
    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}

int main(){
    freopen("primes.out", "w", stdout);
    int n = 3163; //sqrt(10^7)

    vector<int> primes = sieve(n); //get all primes up to n
    for(auto p : primes) cout << p << ", ";

    return 0;
}