#include <iostream>
#include <cmath>
int main()
{
    int x=0;
    int y=0;
    int total = 0;
    std::cout <<"Enter a number to find the sum of its digits: " << std::endl;
    std::cin >> x;
    int i=10;
    int a=0;
    a = int(log10(x) + 1);      // method to get number of digits in a number
    for(int j=0; j<a; j++)  
    {
        y = x%i;
        x = x/i;
        total += y;
        if(x==0)
            break; 
    }

    std::cout <<"The result is: " << total << std::endl;
    std::cout <<"Number of digits is : " << a << std::endl;
    
    


    return 0;
}