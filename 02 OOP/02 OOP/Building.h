#pragma once
#include <string>
using namespace std;

class Building
{
private:
	int _floorCount;
	int _officeCount;
	string _notes;

public:
	string name;
	int employeesCount;
	int freeWorkingSeats;

	float GetSpace();
	float GetPeopleFloor();
	float GetOfficesFloor();
	float GetPeopleOffice();

	Building(string name, int floorCount, int officeCount, int employeesCount, int freeWorkingSeats);
	Building(string name, int floorCount, int officeCount, int employeesCount, int freeWorkingSeats, string notes);
};