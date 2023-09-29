#include <iostream>
#include <string>

int main()
{
    char myLetter = '0';
    std::string vowelLetters = "aeiouAEIOU";
    std::cout << "Enter a letter: " << std::endl;
    std::cin >> myLetter;
    int result = vowelLetters.find(myLetter);       // if char exist in the string, result will be the number of char inside the string, else it will return -1
    if(result != -1)
        std::cout << "The letter you have entered is a vowel " << std::endl;
    else
        std::cout << "The letter you have entered is not a vowel " << std::endl;
    return 0;
}