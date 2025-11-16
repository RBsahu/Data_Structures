
// Bit programming algorithms

#include <iostream>
using namespace std;

int countSetBits(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 10;
	cout << "Count of set bits of " << num<<" :";
	cout<< countSetBits(num) << endl;
	return 0;
}
