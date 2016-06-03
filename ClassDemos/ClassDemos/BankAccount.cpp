#include <iostream>

class BankAccount
{
public:
	bool withdraw(float sum);
	void deposit(float sum);
private:
	float balance;
};

bool BankAccount::withdraw(float sum)
{
	bool result = false;

	if (balance >= sum)
	{
		balance -= sum;
		result = true;
	}

	return result;
}

void BankAccount::deposit(float sum)
{
	balance += sum;
}
