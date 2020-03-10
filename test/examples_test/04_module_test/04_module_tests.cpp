#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount get_balance")
{
	BankAccount account(150);

	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test CheckingAccount get_balance")
{
	CheckingAccount account(50);

	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test BankAccount deposit")
{
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);
	
	REQUIRE_THROWS_AS(account.deposit(-50), InvalidAmount);
	REQUIRE(account.get_balance() == 150);

	account.deposit(50);
	REQUIRE(account.get_balance() == 200);
}

TEST_CASE("Test BankAccount withdraw")
{
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

	REQUIRE_THROWS_AS(account.withdraw(-5), InvalidAmount);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);

	REQUIRE_THROWS_AS(account.withdraw(101), InvalidAmount);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test BankAccount default constructor by balance eq 0")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test BankAccount open account")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.open(25);
	REQUIRE(account.get_balance() == 25);
}

TEST_CASE("Test BankAccount open account already open")
{
	BankAccount account(50);
	REQUIRE_THROWS_AS(account.open(25), InvalidAmount);
}

TEST_CASE("Test BankAccount open account with less than min balance")
{
	BankAccount account;
	REQUIRE_THROWS_AS(account.open(10), InvalidAmount);
}

TEST_CASE("Test BankAccount get rate")
{
	BankAccount account;

	REQUIRE(account.get_rate() == 0.025);
}


