
//Missing Array Element
#include <iostream>
using namespace std;

int missingArray(int arr[],int n)
{
    int total = (n*(n+1))/2;
    int sum = 0;
    for(int i = 0;i<n-1;i++)
    {
        sum = sum + arr[i];
    }
    int missing =  total-sum;
    return missing;
}

int main()
{
    int arr[] = { 1, 2, 3, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Missing Array Element :"<<missingArray(arr,n);

    return 0;
}