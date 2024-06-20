#ifndef BANK_H
#define BANK_H

#include <vector>
#include <map>
#include "BankCustomer.h"

class Bank {
private:
    double primeRate;
    std::vector<BankCustomer> customers;
    std::map<int, Account*> accounts; // Map customer number to account

public:
    Bank();

    void processTransactionLog(const std::string& filename);
    void changePrimeRate(double rate);

private:
    void processAddCustomer(std::istringstream& iss);
    void processChangeName(std::istringstream& iss);
    void processWriteCheck(std::istringstream& iss);
    void processTransfer(std::istringstream& iss);
    void processLinkAccount(std::istringstream& iss);
    void processDeposit(std::istringstream& iss);
    void processWithdrawal(std::istringstream& iss);
    void processChangeAPR(std::istringstream& iss);
    void processNewSavingsAccount(std::istringstream& iss);
    void processNewCheckingAccount(std::istringstream& iss);
    void processSwapAccounts(std::istringstream& iss);
    void processMonthEnd(std::istringstream& iss);
    void processChangePrimeRate(std::istringstream& iss);
    Account* getAccount(int customerNumber, bool isPrimary);
};

#endif
