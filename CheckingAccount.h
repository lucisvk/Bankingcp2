#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
private:
    int checksWritten;

public:
    CheckingAccount();

    void writeCheck(double amount, int checkNumber, std::string payee);
};

#endif
