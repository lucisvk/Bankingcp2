#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
private:
    int withdrawalsThisMonth;

public:
    SavingsAccount();

    void withdraw(double amount) override;
};

#endif
