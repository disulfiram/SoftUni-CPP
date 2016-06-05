#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userInput;
	cin >> userInput;

	int nbLowerCaseLetters = 0;
	int nbUpperCaseLetters = 0;
	int nbSpecialChars = 0;

	for (int i = 0; i < userInput.length(); i++)
	{
		if (userInput[i] >= 'a' && userInput[i] <= 'z')
			nbLowerCaseLetters++;
		else if (userInput[i] >= 'A' && userInput[i] <= 'Z')
			nbUpperCaseLetters++;
		else
			nbSpecialChars++;
	}

	cout << "Number of upper case letters: " << nbUpperCaseLetters << endl;
	cout << "Number of lower case letters: " << nbLowerCaseLetters << endl;
	cout << "Number of special characters: " << nbSpecialChars << endl;
}
