#include "Portfolio.h"
#include "BankAccount.h"
Portfolio::Portfolio()
{ }

void Portfolio::deposit(double amount, string account)
{
    if (account == "C")
    {
        checking.deposit(amount);
    }
    else
    {
        savings.deposit(amount);
    }
}

void Portfolio::withdraw(double amount, string account)
{
    if (account == "C")
    {
        checking.withdraw(amount);
    }
    else
    {
        savings.withdraw(amount);
    }
}

void Portfolio::transfer(double amount, string account)
{
    if (account == "C")
    {
        checking.withdraw(amount);
        savings.deposit(amount);
    }
    else
    {
        savings.withdraw(amount);
        checking.deposit(amount);
    }
}

void Portfolio::print_balances()
{
    cout << "Checking balance is: " << checking.get_balance() << endl;
    cout << "Savings balance is: " << savings.get_balance() << endl;
}

