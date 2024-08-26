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

//withdraw methode
bool Saving_Account::withdraw(double amount){
    return Account::withdraw(amount);

}

//overriden print methode
void Saving_Account::print (std::ostream &os)const {
    os.precision(2);
    os << std::fixed;
    os << "[Saving Account: " << name << ": " << balance << ", " << int_rate << "]";
}