#include <iostream>
using namespace std;

int twoSum(int *arr, int n, int s)
{
    int i = 0;
    int j = n - 1;
    int sum;
    int ans = {-1, -1};

    while (i <= j)
    {
        sum = arr[i] + arr[j];
        if (sum == s)
        {
            ans = {i, j};
            return ans;
        }
        else if (sum > s)
        {
            j--;
        }
        else if (sum < s)
        {
            i++;
        }
    }
    return ans;
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
    int s;
    cin >> s;
}