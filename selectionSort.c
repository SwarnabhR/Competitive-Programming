#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            if (min != i)
            {
                swap(&arr[min], &arr[i]);
            }
        }
    }
}

void print(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
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
    selectionSort(arr, n);
    print(n, arr);
}