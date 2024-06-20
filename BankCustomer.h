#ifndef BANK_CUSTOMER_H
#define BANK_CUSTOMER_H

#include <string>
#include "Account.h"

class BankCustomer {
private:
    Account* primaryAccount;
    Account* secondaryAccount;
    int customerNumber;
    std::string customerName;

public:
    BankCustomer(int number, std::string name);
    std::string getCustomerName() const;
    int getCustomerNumber() const;
    void addAccount(Account* account, bool isSecondary);
    void swapPrimaryAndSecondary();
};

#endif
