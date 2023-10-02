#include <iostream>

int main()
{
    int x=0;
    int y=0;
    int total = 0;
    std::cout <<"Enter a number to find the sum of its digits: " << std::endl;
    std::cin >> x;
    int i=10;
    while(1)
    {
        y = x%i;
        x = x/i;
        total += y;
        if(x==0)
            break; 
    }
    std::cout <<"The result is: " << total << std::endl;
    


    return 0;
}