#include "bank_account.h"
//checking_account.h
class CheckingAccount : public BankAccount
{

public:
	CheckingAccount() = default;
	CheckingAccount(int b) : BankAccount(b) {}  // Initializing to a base class.
	int get_balance()const { return balance * (1 + get_rate()); }
  
};
