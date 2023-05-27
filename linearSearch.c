#include <stdio.h>
#include <stdlib.h>

int linearSearch(int n, int arr[], int key)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("Exists");
            a++;
        }
    }
    if (a == 0)
    {
        printf("Key doesn't exists.");
    }
    else if (a > 0)
    {
        printf("Key exists.");
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
    int key;
    scanf("%d", &key);

    linearSearch(n, arr, key);
}