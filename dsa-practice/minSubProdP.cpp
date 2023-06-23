#include <iostream>
using namespace std;

int minSubArrayWithProductP(int *arr, int n, int p)
{
    int i = 0, j = 0;
    int curP = 1;
    int ans = INT32_MAX;

    while (i < n)
    {
        while (j < n && curP < p)
        {
            curP = curP * arr[j];
            j++;
        }
        if (curP >= p)
        {
            ans = min(ans, j - i);
        }
        curP /= arr[i];
        i++;
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
    int p;
    cin >> p;
    int ans = minSubArrayWithProductP(arr, n, p);
    cout << ans << endl;

    return 0;
}