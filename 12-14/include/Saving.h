#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h" // Account class definition

class SavingAccount : public Account
{
public:
   // constructor initializes balance and interest rate
   SavingAccount( double, double );

   double calculateInterest(); // determine interest owed
private:
   double interestRate; // interest rate (percentage) earned by account
}; // end class SavingsAccount

#endif
