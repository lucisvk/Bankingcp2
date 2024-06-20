#include "CheckingAccount.h"

CheckingAccount::CheckingAccount() : checksWritten(0) {}

void CheckingAccount::writeCheck(double amount, int checkNumber, std::string payee) {
    balance -= amount;
    checksWritten++;
}
