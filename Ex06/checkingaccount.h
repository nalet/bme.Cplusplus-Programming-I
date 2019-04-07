#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "account.h"

class CheckingAccount : public Account
{
private:
    float m_fee{0};
public:
    CheckingAccount(float balance, float fee);
    void printBalance();
    void debit(float a);
};

#endif // CHECKINGACCOUNT_H
