// C++ Program to implement Linear Sort 
#include <iostream> 
using namespace std;

int Linear_search(int arr[], int n, int x)
{	
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main()
{
	int arr[] = { 5, 4, 1, 6, 10, 9, 23, 2 };
	int x = 9;
	int n = sizeof(arr) / sizeof(arr[0]);

	int result = Linear_search(arr, n, x);

	if (result == -1)
		cout << "Element is not present in array";
	else
		cout << "Element is present at index: " << result;

	cout << endl;
	return 0;
}
