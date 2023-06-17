#include <iostream>
#include <initializer_list>

void printValues(std::initializer_list<int> values)
{
    for (int value : values)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // Initialize using an initializer list
    std::initializer_list<int> numbers = {1, 2, 3, 4, 5};

    // Pass initializer list to a function
    printValues(numbers);

    // Initialize directly as function argument
    printValues({6, 7, 8, 9, 10});

    return 0;
}
