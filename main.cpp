#include <iostream>
#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

int main() {
    Bank bank;
    bank.changePrimeRate(1.5); // Set prime rate to 1.5%
    bank.processTransactionLog("transaction_log.txt");

    return 0;
}
