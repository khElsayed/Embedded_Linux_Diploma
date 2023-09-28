#include <iostream>

int main()
{
    char myLetter = '0';
    std::cout << "Enter a letter: " << std::endl;
    std::cin >> myLetter;
    if((myLetter == 'a') || (myLetter == 'e') || (myLetter == 'i') || (myLetter == 'o') || (myLetter == 'u'))
        std::cout << "The letter you have entered is a vowel " << std::endl;
    else if((myLetter == 'A') || (myLetter == 'E') || (myLetter == 'I') || (myLetter == 'O') || (myLetter == 'U'))
        std::cout << "The letter you have entered is a vowel " << std::endl;
    else
        std::cout << "The letter you have entered is not a vowel " << std::endl;
    return 0;
}