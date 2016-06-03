#include <string>

using namespace std;

class Car
{
public:
	string make;
	string model;
	float horsePower;
	double timeTo100kmph;
	float fuelConsumption;
	bool isRunning;

#pragma region Functions
	void Run();
	void Stop();
#pragma endregion
};

void Car::Run()
{
	isRunning = true;
}

void Car::Stop()
{
	isRunning = false;
}