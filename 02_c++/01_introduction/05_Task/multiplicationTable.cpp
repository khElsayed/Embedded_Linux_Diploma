#include <iostream>

int main()
{
    int num = 0;
    int max = 0;
    int temp = 0;
    std::cout << "Enter a number to get its multiplication table: " << std::endl;
    std::cin >> num;
    temp = num;
    std::cout << "Enter max multiplication: " << std::endl;
    std::cin >> max;
    std::cout << "Table of " << num << " is" << std::endl;
    for(int i=1; i<=max; i++)
    {
        std::cout << num << " * " << i << " = "  << temp << std::endl;
        temp += num;
    }

    return 0;
}