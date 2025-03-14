#ifndef OOPPROJECTS_TRUST_ACCOUNT_H
#define OOPPROJECTS_TRUST_ACCOUNT_H
#include "Saving_Account.h"

class Trust_Account : public Saving_Account {
private:
    static constexpr const char *def_name = "unnamed Trust Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double def_int_rate = 0.0;
    static constexpr const double bonus_amount = 50.0;
    static constexpr const double bonus_threshold = 5000.0;
    static constexpr const int max_withdrawal = 3;
    static constexpr const double max_withdraw_percentage = 0.2;
protected:
    int num_withdrawal;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

    //Deposite of 5000.0 or more will recieve 50 bonus
   virtual bool deposit(double amount) override;

    //Only allowed max. of 3 withdraw, each can be up to a max. of 20% of the account's value
    virtual bool withdraw(double amount) override;

    virtual void print(std::ostream &os) const override;
    virtual ~Trust_Account() = default;
};

#endif //OOPPROJECTS_TRUST_ACCOUNT_H
