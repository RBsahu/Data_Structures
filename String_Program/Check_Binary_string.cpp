//Check for Binary String
#include <iostream>
using namespace std;

int  check_Binary_string(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '0' && s[i] != '1')
		{
			
			return false;
		}
	}
	return true;
}


int main()
{
	string str = "1011";	
	cout << "Input String\t\t: " << str << endl;
	if (check_Binary_string(str))
		cout << "\n True";
	else
		cout << "\n False";


	string str1 = "Ram1011";
	cout << "\nInput String\t\t: " << str1 << endl;
	if (check_Binary_string(str1))
		cout << "\n True";
	else
		cout << "\n False";

	cout << endl;
	return 0;
}

