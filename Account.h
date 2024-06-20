#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

class Account {
protected:
    double balance;
    double apr;

public:
    Account();
    virtual ~Account();

    void deposit(double amount);
    virtual void withdraw(double amount);
    void setAPR(double rate);
    double getBalance() const;
    double getAPR() const;
};

#endif
