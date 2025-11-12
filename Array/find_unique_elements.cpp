// C++ Program to find unique elements in an array
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 1, 2, 2, 3, 4 };
    set<int> s;

    // inserting elements in the set.
    s.insert(arr.begin(), arr.end());
    cout << "Unique elements in the array: ";
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << " " << *it;   
    cout << endl;

    vector<int> arr1 = { 1, 2, 1, 2, 2, 3, 4,5 };
    set<int> s1;
    // inserting array element from set
    for (auto i : arr1)
        s1.insert(i);

    // print set elements
    cout << "Unique elements in the array1: ";
    for (auto j : s1)
        cout << j << " ";
    return 0;
}