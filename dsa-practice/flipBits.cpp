#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
    int max_sum = arr[0];
    int curr_sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(curr_sum, max_sum);
    }
    return max(max_sum, 0);
}

int flipBits(int *arr, int n)
{
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = -1;
            count1++;
        }
    }
    return count1 + maxSum(arr, n);
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
    cout << flipBits(arr, n) << endl;
}