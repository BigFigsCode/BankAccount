#ifndef PORTFOLIO_H
#define PORTFOLIO_H
#include "BankAccount.h"
#include <string>
using namespace std;
class Portfolio
{
public:
    /**
       Constructs a portfolio with zero balance on both accounts.
    */
    Portfolio();

    /**
       Deposits money in a specified account.
       @param amount the amount to deposit
       @param account the account to deposit to
    */
    void deposit(double amount, string account);

    /**
       Withdraws money from a specified account.
       @param amount the amount to withdraw
       @param account the account to withdraw from
    */
    void withdraw(double amount, string account);

    /**
       Transfers money from a specified account.
       @param amount the amount to transfer
       @param account the account to transfer from
    */
    void transfer(double amount, string account);

    /**
       Prints both balances.
    */
    void print_balances();

private:
    BankAccount checking;
    BankAccount savings;
};

#endif
