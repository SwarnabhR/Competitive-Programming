/*Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

Example 2:

Input:
N = 10
A[] = {6,1,2,8,3,4,7,10,5}
Output: 9*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 5};
    int n = 5;
    int sum = n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];
    }
    cout << "Missing Number: " << sum << endl;
}