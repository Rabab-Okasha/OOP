#include "Account.h"

//over loaded constructor
Account::Account(std::string name, double balance)
       :name{name}, balance{balance}{
}

//deposite methode
bool Account::deposit(double amount){
    if(amount < 0)
        return false;
    else
        balance += amount;
        return true;
}

//withdraw methode
bool Account::withdraw (double amount){
    if(balance - amount >= 0) {
        balance -= amount;
        return true;
    }
        else
            return false;
}

//overriden print methode
void Account::print (std::ostream &os)const {
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
