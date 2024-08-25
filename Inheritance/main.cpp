#include <iostream>
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);

    // Saving

    vector<Saving_Account> sav_accounts;
    sav_accounts.push_back(Saving_Account {} );
    sav_accounts.push_back(Saving_Account {"Superman"} );
    sav_accounts.push_back(Saving_Account {"Batman", 2000} );
    sav_accounts.push_back(Saving_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    //Checking Account
     vector<Checking_Account> check_account;
     check_account.push_back(Checking_Account{});
     check_account.push_back(Checking_Account{"Kirk"});
    check_account.push_back(Checking_Account{"Spock", 2000});
    check_account.push_back(Checking_Account{"Bones", 5000});

    display(check_account);
    deposit(check_account, 1000);
    withdraw(check_account, 2000);

    //Trust Account
    vector<Trust_Account> trust_account;
    trust_account.push_back(Trust_Account{});
    trust_account.push_back(Trust_Account{"Aang", 10000, 5.0});
    trust_account.push_back(Trust_Account{"Kitara", 20000, 4.0});
    trust_account.push_back(Trust_Account{"Suka", 30000});

    display(trust_account);
    deposit(trust_account, 1000);
    withdraw(trust_account, 3000);

    for(int i = 1; i <= 5; i++)
        withdraw(trust_account, 1000);


    return 0;
}

