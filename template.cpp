#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void printType(T value)
{
    cout << "Type: " << typeid(value).name() << endl;
}

int main()
{
    int num = 10;
    double pi = 3.14;
    string name = "John";
    printType(num);
    printType(pi);
    printType(name);

    return 0;
}