#include "Checking_Account.h"

//overloaded constructor
Checking_Account::Checking_Account(std::string name, double balance )
    : Account{name, balance}{
}

//deposit methode
bool Checking_Account::deposit(double amount){
    return Account::deposit(amount);
}

//withdraw methode with 1.50 fee
bool Checking_Account::withdraw (double amount){
    balance -= fee;
    return Account::withdraw(amount);
}

//override print methode
void Checking_Account::print(std::ostream &os)const{
    os << "[Checking_Account: " << name << " : " << balance << "]";
}

