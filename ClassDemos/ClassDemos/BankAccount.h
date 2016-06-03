#pragma once

class BankAccount
{
public:
	bool withdraw(float sum);
	void deposit(float sum);
private:
	float balance;
};