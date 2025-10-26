#include <bits/stdc++.h>

using namespace std;

class Bank {
public:
    vector<long long> balance;
    Bank(vector<long long>& balance) {
        this->balance = balance;
    }
    bool transfer(int account1, int account2, long long money) {
        if(isValid(account1) && isValid(account2) && this->balance[account1-1] >= money){
            this->balance[account1-1] -= money;
            this->balance[account2-1] += money;
            return true;
        }
        return false;
    }   
    bool deposit(int account, long long money) {
        if(isValid(account)){this->balance[account-1] += money; return true;}
        return false;
    }  
    bool withdraw(int account, long long money) {
        if(isValid(account) && this->balance[account-1] >= money){this->balance[account-1] -= money; return true;}
        return false;
    }
    bool isValid(int account){
        return (account > 0 && account <= this->balance.size());
    }
};