#include <iostream>

int main()
{
    std::cout << "Enter three numbers: ";
    int x1{};
    int x2{};
    int x3{};

    std::cin >> x1 >> x2 >> x3;

    std::cout << "You entered " << x1 << ", " << x2 << ", " << x3 << ".";

    return 0;
}
