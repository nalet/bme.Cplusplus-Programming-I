#include "account.h"
#include <iostream>

Account::Account(float balance) : m_balance(balance)
{

}

void Account::credit(float a)
{
    this->m_balance += a;
}

void Account::debit(float a)
{
    if(this->m_balance - a >= 0)
        this->m_balance -= a;
    else
        std::cout << "Warning: Not enough funds" << std::endl;
}
