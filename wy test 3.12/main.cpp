#include <iostream>
#include <string>
Account::Account(int money)
{
    setMoney(money);
}

Account::~Account()
{

}

void Account::setMoney(int money)
{
    if(money >= 0 )
        m_money =money;
    else
    {
        cout << "；；账户余额不能等于0: ";
        m_money = 0；
    }
int Account:: getMoney
{
    return m_money;
}

void Account::debit(int takemoney)
{
    if(takemoney > 0 )
        m_money = takemoney;
    else
        cout<< "当前余额为: " << getMoney() << endl;
}



