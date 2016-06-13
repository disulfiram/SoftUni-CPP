#include <string>
#include "Building.h"
using namespace std;

float Building::GetSpace()
{
	float space = (this->employeesCount / (this->employeesCount + this->freeWorkingSeats));
	return space;
}

float Building::GetPeopleFloor()
{
	float result = (this->employeesCount / this->_floorCount);
	return result;
}

float Building::GetOfficesFloor()
{
	float result = (this->_officeCount / this->_floorCount);
	return result;
}

float Building::GetPeopleOffice()
{
	float result = (this->employeesCount / this->_floorCount);
	return result;
}

Building::Building(string name, int floorCount, int officeCount, int employeesCount, int freeWorkingSeats, string notes) :
	name(name), _floorCount(floorCount), _officeCount(officeCount), employeesCount(employeesCount), freeWorkingSeats(freeWorkingSeats), _notes(notes) { }

Building::Building(string name, int floorCount, int officeCount, int employeesCount, int freeWorkingSeats):
	Building(name, floorCount, officeCount, employeesCount, freeWorkingSeats, "") { }
