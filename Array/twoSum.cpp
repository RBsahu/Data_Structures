#include <iostream>
#include <vector>
using namespace std;

// check any sum of any two number 
// is equal to the given target value
//bool twoSum(vector<int>& arr, int target)
bool twoSum(vector<int>& arr,int n, int target)
{    
    //int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            // Check if the sum of any two number equals to target
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    //if no pair sum equals target, return false
    return false;
}

int main() {

    vector<int> arr = { 2, 7, 5, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;    

    if (twoSum(arr,n, target))
        cout << "true";
    else
        cout << "false";

    cout << endl;
    twoSum(arr,n, target);

    return 0;
}