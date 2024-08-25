#ifndef OOPPROJECTS_SAVING_ACCOUNT_H
#define OOPPROJECTS_SAVING_ACCOUNT_H
#include "Account.h"

class Saving_Account : public Account{
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &account);
private:
    static constexpr const char *def_name = "unnamed savings account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
protected:
    double int_rate;
public:
Saving_Account(std::string name = def_name, double balance = def_balance,
double int_rate = def_int_rate);
//deposit methode
bool deposit(double amount);
};


#endif //OOPPROJECTS_SAVING_ACCOUNT_H
