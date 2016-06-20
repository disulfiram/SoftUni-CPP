#include <iostream>
#include <string>

using namespace std;

int PrintMenu()
{
	cout << "Select option" << endl;
	cout << "*************" << endl;
	cout << "1. Get student by ID" << endl;
	cout << "2. Get teacher by ID" << endl;
	cout << "3. Get guest teacher by ID" << endl;
	cout << "4. Add student" << endl;
	cout << "5. Add teacher" << endl;
	cout << "6. Add guest teacher" << endl;
	cout << "Anything else to exit" << endl;
	return 0;
}

int main(int argc, char ** argv)
{
	bool continueUserInput = true;
	while (continueUserInput)
	{
		system("cls");
		PrintMenu();
		int userInput = 0;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			cout << "1" << endl;
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			continueUserInput = false;
			break;
		}
	}
}
