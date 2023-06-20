#include <iostream>
#include <cstring>

int main()
{
    const char *str1 = "Hello";
    const char *str2 = "World";

    int result = std::strcmp(str1, str2);

    if (result == 0)
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else if (result < 0)
    {
        std::cout << "str1 is less than str2." << std::endl;
    }
    else
    {
        std::cout << "str1 is greater than str2." << std::endl;
    }

    return 0;
}
