/*Watch

Write a program which reads an integer S
[second] and converts it to h:m:s where h, m, s denote hours, minutes (less than 60) and seconds (less than 60) respectively. */

#include <iostream>
using namespace std;

int main()
{
    int S;
    cin >> S;
    int h;
    h = S / (60 * 60);
    int mod;
    mod = S % (60 * 60);
    int m;
    m = mod / 60;
    mod = mod % 60;
    int s;
    s = mod;
    cout << h << ":" << m << ":" << s << endl;

    return 0;
}