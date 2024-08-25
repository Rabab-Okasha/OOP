#include "Checking_Account.h"

//overloaded constructor
Checking_Account::Checking_Account(std::string name, double balance )
    : Account{name, balance}{
}

//withdraw methode with 1.50 fee
bool Checking_Account::withdraw (double amount){
    balance -= fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account){
    os << "[Checking_Account " << account.name << " : " << account.balance << "]";
    return os;
}

