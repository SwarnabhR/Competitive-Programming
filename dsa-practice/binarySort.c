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
    return s;
}

int binaryInsertionSort(int arr[])
{
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

    return 0;
}