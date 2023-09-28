#include <iostream>
#include <math.h>

int main()
{
    int a=0 ,b=0 ,c = 0;
    int angle = 0;
    std::cout << "Enter length of side A: " << std::endl;
    std::cin >> a;

    std::cout << "Enter length of side B: " << std::endl;
    std::cin >> b;

    std::cout << "Enter length of side C: " << std::endl;
    std::cin >> c;

    if((a != 0) && (b != 0) && (c != 0))
    {
    if(pow(a,2) == pow(b,2) + pow(c,2))
        angle = a;
    else if(pow(b,2) == pow(a,2) + pow(c,2))
        angle = b;
    else if(pow(c,2) == pow(b,2) + pow(a,2))
        angle = c;
    else
        angle = 0;
    }
    
    if(angle == 0)
        std::cout << "The given triangle is not a right angle triangle" << std::endl;
    else if(angle == a)
        std::cout << "The angle between B and C is 90 degree, hence it is a right angle triangle" << std::endl;
    else if(angle == b)
        std::cout << "The angle between A and C is 90 degree, hence it is a right angle triangle" << std::endl;
    else if(angle == c)
        std::cout << "The angle between A and B is 90 degree, hence it is a right angle triangle" << std::endl;
    
    return 0;
}