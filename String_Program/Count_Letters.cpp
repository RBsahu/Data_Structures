// C++ program to count the 
// uppercase, lowercase, special characters 
// and numeric values
#include <iostream>
using namespace std;

void count_Letters(string str)
{
	int upper = 0;
	int lower = 0;
	int special = 0;
	int number = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
			upper++;
		else if (islower(str[i]))
			lower++;
		else if (isdigit(str[i]))
			number++;
		else
			special++;
	}
	cout << "Uppercase letters	: " << upper << endl;
	cout << "Lowercase letters	: " << lower << endl;
	cout << "Numeric digits		: " << number << endl;
	cout << "Special characters	: " << special << endl;
}

int main()
{
	string str = "#Ram$Balak#Sahu*15";
	cout << "Input String		: " << str << endl;
	count_Letters(str);

	return 0;
}

