#include "Trust_Account.h"

//overloaded consturctor
Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
      : Saving_Account{name, balance, int_rate}, num_withdrawal{0}{
}

//deposit mehtode
bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        balance += bonus_amount;
    return Saving_Account::deposit(amount);
}

//Only allowed max. of 3 withdrawals, each can be up to a max. of 20% of the account's value
bool Trust_Account::withdraw(double amount) {
    if (num_withdrawal >= max_withdrawal || (amount > balance * max_withdraw_percentage))
        return false;
    else{
        ++num_withdrawal;
        return Saving_Account::withdraw(amount);
    }
}

//overriden print methode
void Trust_Account::print(std::ostream &os) const{
    os.precision(2);
    os << std::fixed;
    os << "[Trust Account " << name << ": " << balance <<", "
       << int_rate << "% withdraw : " << num_withdrawal<< "]";
}
