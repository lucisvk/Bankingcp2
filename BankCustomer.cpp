#include "BankCustomer.h"

BankCustomer::BankCustomer(int number, std::string name) : customerNumber(number), customerName(name), primaryAccount(nullptr), secondaryAccount(nullptr) {}

std::string BankCustomer::getCustomerName() const {
    return customerName;
}

int BankCustomer::getCustomerNumber() const {
    return customerNumber;
}

void BankCustomer::addAccount(Account* account, bool isSecondary) {
    if (isSecondary) {
        secondaryAccount = account;
    } else {
        primaryAccount = account;
    }
}

void BankCustomer::swapPrimaryAndSecondary() {
    std::swap(primaryAccount, secondaryAccount);
}
