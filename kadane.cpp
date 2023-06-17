#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{
    int sum = 0;
    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << kadane(arr, n) << endl;

    return 0;
}