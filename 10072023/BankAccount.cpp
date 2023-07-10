#include "BankAccount.h"

BankAccount::BankAccount(double initialBalance)
	: balance(initialBalance) {}

void BankAccount::deposit(double amount)
{
	balance += amount;
}

void BankAccount::withdraw(double amount)
{
	if (amount > balance)
	{
		throw InsufficientFundsException("Недостатньо коштів на рахунку");
	}

	balance -= amount;
}

double BankAccount::getBalance() const
{
	return balance;
}
