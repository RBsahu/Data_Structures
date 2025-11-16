//Reverse a string without changing special characters position
#include <iostream>
using namespace std;

int is_Special_char(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 0;
	else
		return 1;
}

void reverse_Without_Special_char(string str)
{
	int l = 0;
	int r = str.length() - 1;
	while (l < r)
	{
		if (is_Special_char(str[l]))
			l++;
		else if (is_Special_char(str[r]))
			r--;
		else
		{
			swap(str[l], str[r]);
			l++;
			r--;
		}
	}
	cout << "Reverse String\t\t: " << str << endl;
}

int main()
{
	string str = "ab,cd$ef";	
	cout << "Input String\t\t: " << str << endl;
	reverse_Without_Special_char(str);

	return 0;
}

