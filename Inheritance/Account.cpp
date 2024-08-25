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
//get methode
double Account::get_balance() const {
    return balance;
}
// friend methode
std::ostream &operator<<(std::ostream &os, const Account &account){
    os << "[Account: " << account.name << ": " << account.balance << "]";
    return os;
}
