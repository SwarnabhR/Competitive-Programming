#include <stdio.h>
#include <stdlib.h>

int binarySearch(int n, int arr[], int key, int s, int e)
{

    while (s < e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return key;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);
    int ans = binarySearch(n, arr, key, 0, n - 1);
    if (ans == -1)
    {
        printf("Result not found.");
    }
    else
    {
        printf("Result found.");
    }

    return 0;
}