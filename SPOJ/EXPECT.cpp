#include <iostream>
using namespace std;

int main()
{
    int n;

    while (true)
    {
        cin >> n;
        cout << n << " ";
        fflush(stdout);
        if (n == 42)
        {
            break;
        }
    }
}