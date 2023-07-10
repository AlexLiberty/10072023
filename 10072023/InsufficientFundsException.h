#pragma once
#include <exception>
#include <string>
#include <iostream>

using namespace std;

class InsufficientFundsException : public exception
{
private:
    string message;

public:
    explicit InsufficientFundsException(const string& errorMessage);

    const char* what() const noexcept override;
};

