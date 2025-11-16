// Reverse a String
#include <iostream>
using namespace std;

void reverseString1(string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
string reverseString2(string str)
{
    int l = 0;
	int r = str.length() - 1;
    while (l < r)
    {
        swap(str[l], str[r]);
        l++;
        r--;
    }

    return str;
}

int main()
{
	string str = "Ram sahu";
    cout <<"\n Given String 1 :"<< str;   
	reverseString1(str);
	cout << "\n Reversed String: " << str << endl;

    string str2 = "Ram Balak";
    cout << "\n Given String 2 :" << str2;
	// Using Two Pointer
    string revStr2 = reverseString2(str2);
	cout << "\n Reversed String: " << revStr2 << endl;

	string str3 = "Hello World";
    cout << "\n Given String 3 :" << str3;
	// Using STL reverse function
	reverse(str3.begin(), str3.end());
	cout << "\n Reversed String: " << str3 << endl;

	return 0;
}
