#ifndef OOPPROJECTS_CHECKING_ACCOUNT_H
#define OOPPROJECTS_CHECKING_ACCOUNT_H
#include "Account.h"
#include <iostream>
#include <string>

class Checking_Account : public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "unnamed Checking Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw (double amount);
};


#endif //OOPPROJECTS_CHECKING_ACCOUNT_H
