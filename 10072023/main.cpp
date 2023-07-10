#include <iostream>
#include "InsufficientFundsException.h"
#include "BankAccount.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try
    {
        BankAccount account(1000.0);
        cout << "���������� ������: " << account.getBalance() << endl;

        account.withdraw(500.0);
        cout << "������ ���� ������: " << account.getBalance() << endl;

        account.withdraw(800.0);
        cout << "������ ���� ������� ������" << account.getBalance() << endl;
    }
    catch (const InsufficientFundsException& ex)
    {
        cout << "� ��� � �: " << ex.what() << endl;
    }

    return 0;
}