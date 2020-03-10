#include "checking_account.h"	//include this now
#include <iostream>
#include <vector>
using std::cout; 
using std::vector;

int main()
{
	CheckingAccount c;
	CheckingAccount a(50), b(10);
	display_balance(a); 
	cout << a;	//Overloading << operator
	std::cin >> a; // overloading >> operator
	display_balance(a);
	vector<BankAccount> accounts{ BankAccount(100),
	BankAccount(200), BankAccount(300) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}


	BankAccount account(500);
	int balance = account.get_balance();
	cout << "\nbalance: " << balance;

	try 
	{
		account.deposit(-10);
	}
	catch (InvalidAmount e)
	{
		cout << e.get_message();
	}

	return 0;
}
