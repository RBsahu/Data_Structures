
// C++ program to find common elements between two Arrays
//  using Two for loop and set_intersection()

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[] = { 11, 22, 33, 44, 55, 66 };
    int arr2[] = { 11, 7, 55, 4, 66, 12 };

    // Compute the sizes
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Sort the arrays
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    // Vector to store result
    vector<int> v;

    // Finding common elements using
    // set_intersection() function
    set_intersection(arr1, arr1 + n1, arr2,
        arr2 + n2, back_inserter(v));

    cout << "Method 1 ";
    cout << "common elements from two Array :";
    for (auto i : v) {
        cout << i << " ";
    }

    int a[] = { 1, 45, 54, 71, 76, 12 };
    int b[] = { 1, 7, 5, 4, 6, 12 };
    int c[6] = {};
    // Compute the sizes
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    cout << "\nMethod 2 ";
    cout << "common elements from two Array :";

    for (int i = 0; i < k; i++)
        cout << c[i] << " ";

    cout << endl;
    return 0;
}