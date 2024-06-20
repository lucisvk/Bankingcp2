#include "Account.h"

Account::Account() : balance(0.0), apr(0.0) {}

Account::~Account() {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    balance -= amount;
}

void Account::setAPR(double rate) {
    apr = rate;
}

double Account::getBalance() const {
    return balance;
}

double Account::getAPR() const {
    return apr;
}
