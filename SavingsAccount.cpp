#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() : withdrawalsThisMonth(0) {}

void SavingsAccount::withdraw(double amount) {
    if (withdrawalsThisMonth < 3) {
        balance -= amount;
        withdrawalsThisMonth++;
    } else {
        std::cout << "Exceeded monthly withdrawal limit." << std::endl;
    }
}
