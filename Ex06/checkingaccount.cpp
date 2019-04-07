#include "checkingaccount.h"
#include <iostream>

CheckingAccount::CheckingAccount(float balance, float fee) : Account(balance), m_fee(fee)
{
    std::cout << "Initial amount(" << balance << ") and fee(" << fee << ")" << std::endl;
}

void CheckingAccount::printBalance()
{
    std::cout << "Current Balance: " << this->m_balance << std::endl;
}

void CheckingAccount::debit(float a)
{
    Account::debit(a + this->m_fee);
}
