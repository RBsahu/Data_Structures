// Bubble sort program
#include <iostream>
using namespace std;

// Bubble Sort function
void bubbleSort(int arr[], int n)
{ 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);

            }
        }
    }
}

int main()
{
    int arr[] = { 1, 33, 3, 12, 22, 11, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array :";  
    for (auto i : arr)
        cout << i << " ";

    cout << endl;
    return 0;
}