/*Rectangle

Write a program which calculates the area and perimeter of a given rectangle.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int ar, pm;
    cin >> a >> b;
    ar = a * b;
    pm = 2 * (a + b);
    cout << ar << " " << pm << endl;
}