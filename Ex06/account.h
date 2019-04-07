#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account
{
protected:
    float m_balance{0.0};
public:
    Account(float balance);
    void credit(float a);
    void debit(float a);
};

#endif // ACCOUNT_H
