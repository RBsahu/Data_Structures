//Check for Binary String
#include <iostream>
using namespace std;

int  string_length(string s)
{
	int i = 0;
	int length = 0;
	while(s[i])
	{
		length++;
		i++;
	}
	return length;
}


int main()
{
	string str1 = "Ram";	
	cout << "\n Writing Own Method";
	cout << "\n String Length \t\t: " << string_length(str1);

	string str2 = "Sahu";
	cout << "\n Using In-built methods";
	cout << "\n String Length \t\t: " << str2.size();	

	cout << endl;
	return 0;
}

