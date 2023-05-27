#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int n, int arr[])
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
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
    bubbleSort(n, arr);
    printArray(arr, n);
}