#include <iostream>
#include <string>
using namespace std;
#include "Portfolio.h"
#include "BankAccount.h"
int main()
{
	Portfolio my_port;
	cout << "Deposit 500 to each account" << endl;
	my_port.deposit(500, "C");
	my_port.deposit(500, "S");
	my_port.print_balances();
	cout << endl;

	cout << "Transfer 500 from checking" << endl;
	my_port.transfer(500, "C");
	my_port.print_balances();
	cout << endl;

	cout << "Withdraw 200 from savings" << endl;
	my_port.withdraw(200, "S");
	my_port.print_balances();
	cout << endl;
	return 0;
}



