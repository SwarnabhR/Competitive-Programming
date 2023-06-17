#include <iostream>
// Template function to find the maximum of two values
template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1 = 10, num2 = 20;
    double pi1 = 3.14, pi2 = 3.1416;

    // Calling the max function with integers
    int maxInt = max(num1, num2);
    std::cout << "Max of " << num1 << " and " << num2 << " is: " << maxInt << std::endl;

    // Calling the max function with doubles
    double maxDouble = max(pi1, pi2);
    std::cout << "Max of " << pi1 << " and " << pi2 << " is: " << maxDouble << std::endl;

    return 0;
}
