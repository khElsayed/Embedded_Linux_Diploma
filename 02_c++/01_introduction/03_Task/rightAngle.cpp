#include <iostream>

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

    if((a*a) == (b*b) + (c*c))
        angle = a;
    else if((b*b) == (a*a) + (c*c))
        angle = b;
    else if((c*c) == (b*b) + (a*a))
        angle = c;
    else
        angle = 0;
    
    if(angle == a)
        std::cout << "The angle between B and C is 90 degree, hence it is a right angle triangle" << std::endl;
    else if(angle == b)
        std::cout << "The angle between A and C is 90 degree, hence it is a right angle triangle" << std::endl;
    else if(angle == c)
        std::cout << "The angle between A and B is 90 degree, hence it is a right angle triangle" << std::endl;
    else if(angle == 0)
        std::cout << "The given triangle is not a right angle triangle" << std::endl;

    return 0;
}