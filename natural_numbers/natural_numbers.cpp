#include <iostream>

int natural_numbers(int number)
{
    if (number <= 0)
    {
        return 0;
    }

    int total = 0;

    for (int i = 1; i < number; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            total += i;
        }
    }

    return total;
}

int main(int argc, char const *argv[])
{
    std::cout << natural_numbers(10) << std::endl;
    return 0;
}
