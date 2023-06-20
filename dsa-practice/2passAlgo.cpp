#include <iostream>
using namespace std;

int sort012(int arr[], int n)
{

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt0 > 0)
        {
            arr[i] = 0;
            cnt0--;
        }
        else if (cnt1 > 0)
        {
            arr[i] = 1;
            cnt1--;
        }
        else
        {
            arr[i] = 2;
            cnt2--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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

    cout << sort012(arr, n) << endl;
}