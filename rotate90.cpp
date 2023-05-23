/*Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space.

Example 1:

Input:
N = 3
matrix[][] = {{1, 2, 3},
              {4, 5, 6}
              {7, 8, 9}}
Output:
Rotated Matrix:
3 6 9
2 5 8
1 4 7

Example 2:

Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output:
Rotated Matrix:
2 4
1 3
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = n - 1; n > 0; n--)
            {
                matrix[i][j] = matrix[k][i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}