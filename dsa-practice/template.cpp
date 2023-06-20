#include <iostream>

template <typename T>
T min(T a, T b)
{
    return (a > b) ? b : a;
}

int main()
{
    int num1 = 10, num2 = 20;
    double pi = 3.14, pi2 = 3.1416;

    int minInt = min(num1, num2);
    std::cout << "Min of " << num1 << " and " << num2 << " is: " << minInt << std::endl;
    double minDouble = min(pi, pi2);
    std::cout << "Min of " << pi << " and " << pi2 << " is: " << minDouble << std::endl;

    return 0;
}