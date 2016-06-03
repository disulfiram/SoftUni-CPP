#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Car.h"
#include "Rectangle.h"

using namespace std;

int main(int argc, char ** argv)
{
#pragma region CarDemos
	Car opelAstra;
	opelAstra.make = "Opel";
	opelAstra.model = "Astra";
	opelAstra.horsePower = 50;
	opelAstra.isRunning = false;

	Car maseratiMC12;
	maseratiMC12.make = "Mazeratti";
	maseratiMC12.model = "MC12";
	maseratiMC12.horsePower = 600;
	maseratiMC12.isRunning = false;

	cout << opelAstra.make << " " << opelAstra.horsePower << endl;
	cout << maseratiMC12.make << " " << maseratiMC12.horsePower << endl;

	cout << maseratiMC12.isRunning << endl;
	maseratiMC12.Run();
	cout << maseratiMC12.isRunning << endl;
#pragma endregion

#pragma region BankAccountDemos

	BankAccount myAccount;
	myAccount.deposit(200);
	if (myAccount.withdraw(201))
	{
		cout << "Successful Transaction!" << endl;
	}
	else
	{
		cout << "Insuficient Funds!" << endl;
	}
#pragma endregion

#pragma region RectangleDemos
	Rectangle square;
	square.coordinate.x = 3;
	square.coordinate.y = 4;
	square.setHeight(5);
	square.setWidth(5);

	cout << "Square area: "<< square.area() << endl;
	cout << "Square perimeter: " << square.parameter() << endl;
#pragma endregion
	return 0;
}