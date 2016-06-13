#include <iostream>
#include <array>
#include <list>
#include "Building.h"

int main(int argc, char ** argv)
{
	Building xyzIndustries = Building("XYZ industries", 6, 127, 600, 196);
	Building rdc = Building("Rapid Development Crew", 7, 210, 822, 85, "First floor is a restaurant");
	Building softUni = Building("SoftUni", 11, 106, 200, 60);

	Building buildings[] = { xyzIndustries, rdc, softUni };

	// These variables will hold the indexes of the coresponding buildings.
	int mostEmployes = 0;
	int mostFreePlaces = 0;
	int mostSpacy = 0;
	int mostPeopleFloor = 0;
	int leastPeopleFloor = 0;
	int mostOfficesFloor = 0;
	int leastOfficesFloor = 0;
	int mostPeopleOffice = 0;
	int leastPeopleOffice = 0;

	for (int i = 0; i < sizeof(buildings) / sizeof(buildings[0]); i++)
	{
		if (buildings[mostEmployes].employeesCount < buildings[i].employeesCount)
			mostEmployes = i;
		if (buildings[mostFreePlaces].freeWorkingSeats < buildings[i].freeWorkingSeats)
			mostFreePlaces = i;
		if (buildings[mostSpacy].GetSpace() < buildings[i].GetSpace())
			mostSpacy = i;
		if (buildings[mostPeopleFloor].GetPeopleFloor() < buildings[i].GetPeopleFloor())
			mostPeopleFloor = i;
		if (buildings[leastPeopleFloor].GetPeopleFloor() > buildings[i].GetPeopleFloor())
			leastPeopleFloor = i;
		if (buildings[mostOfficesFloor].GetOfficesFloor() < buildings[i].GetOfficesFloor())
			mostOfficesFloor = i; 
		if (buildings[leastOfficesFloor].GetOfficesFloor() > buildings[i].GetOfficesFloor())
			leastOfficesFloor = i;
		if (buildings[mostPeopleOffice].GetPeopleOffice() < buildings[i].GetPeopleOffice())
			mostPeopleOffice = i;
		if (buildings[leastPeopleOffice].GetPeopleOffice() > buildings[i].GetPeopleOffice())
			leastPeopleOffice = i;
	}

	cout << buildings[mostEmployes].name << " : Most employees." << endl;
	cout << buildings[mostFreePlaces].name << " : Most free places." << endl;
	cout << buildings[mostSpacy].name << " : Most free space." << endl;
	cout << buildings[mostPeopleFloor].name << " : Most people per floor." << endl;
	cout << buildings[leastPeopleFloor].name << " : Least people per floor." << endl;
	cout << buildings[mostOfficesFloor].name << " : Most offices per floor." << endl;
	cout << buildings[leastOfficesFloor].name << " : Least offices per floor." << endl;
	cout << buildings[mostPeopleOffice].name << " : Most people per office." << endl;
	cout << buildings[leastPeopleOffice].name << " : Least people per office." << endl;
	return 0;
}