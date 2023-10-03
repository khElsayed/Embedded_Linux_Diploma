#include <iostream>
#include <math.h>

int main()
{
    // decimal to binary
    int decimal = 0;
    int temp = 0;
    char y[8] = {'0'};
    int counter = 0;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << "Binary representation: ";
    while(1)
    {
        temp = decimal%2;
        if(temp == 0)
            y[counter] = '0';
        else
            y[counter] = '1';
        decimal = decimal/2;
        if(decimal==0)
            break;
        counter++;
    }
    for(int j=7; j>=0; j--)
    {
        std::cout << y[j] ;
    }
    std::cout << " " << std::endl;

    // binary(from User) to decimal
    std::cout << "Enter a binary number: ";
    counter = 8;
    int sum = 0;
    char b[8]={'0'};
    while(1)
    {
        counter--;
        std::cin >> b[counter];
        if(b[counter] == '1')
            sum += pow(2,counter);
        if(counter==0)
            break;
    }
    std::cout << "decimal representation: " << sum << std::endl;


    return 0;
}