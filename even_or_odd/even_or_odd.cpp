#include <string>
#include <iostream>

std::string even_or_odd(int number)
{
    return number % 2 ? "Odd" : "Even";
}

int main()
{
    std::cout << even_or_odd(5) << std::endl;

    return 0;
}