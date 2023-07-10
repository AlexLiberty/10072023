#include "InsufficientFundsException.h"

InsufficientFundsException::InsufficientFundsException(const string& errorMessage)
	: message(errorMessage) {}

const char* InsufficientFundsException::what() const noexcept
{
	return message.data();
}
