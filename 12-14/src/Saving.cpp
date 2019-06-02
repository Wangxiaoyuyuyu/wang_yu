#include "SavingAccount.h"
SavingAccount::SavingAccount( double initialBalance, double rate )
   : Account( initialBalance )
{
   interestRate = ( rate < 0.0 ) ? 0.0 : rate;
}
double SavingAccount::calculateInterest()
{
   return getBalance() * interestRate;
}
