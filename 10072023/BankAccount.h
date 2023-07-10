#pragma once
#include "InsufficientFundsException.h"
#include <iostream>

using namespace std;

class BankAccount
{
private:
    double balance;

public:
    explicit BankAccount(double initialBalance);

    void deposit(double amount);

    void withdraw(double amount);

    double getBalance() const;
};

