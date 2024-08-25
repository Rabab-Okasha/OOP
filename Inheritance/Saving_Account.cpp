#include "Saving_Account.h"

//overloaded constructor
Saving_Account::Saving_Account(std::string name, double balance, double int_rate)
    : Account{name, balance},int_rate {int_rate}{
}

//deposit methode
bool Saving_Account::deposit(double amount){
    amount += amount * (int_rate / 100);
    return Account ::deposit(amount);
}
// friend methode
std::ostream &operator<<(std::ostream &os, const Saving_Account &account){
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}