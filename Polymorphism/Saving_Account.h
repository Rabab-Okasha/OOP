#ifndef OOPPROJECTS_SAVING_ACCOUNT_H
#define OOPPROJECTS_SAVING_ACCOUNT_H
#include "Account.h"

class Saving_Account : public Account{
private:
    static constexpr const char *def_name = "unnamed savings account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Saving_Account(std::string name = def_name, double balance = def_balance,
                   double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os)const override;
    virtual ~Saving_Account() = default;
};


#endif //OOPPROJECTS_SAVING_ACCOUNT_H
