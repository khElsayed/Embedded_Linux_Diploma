#include <iostream>
using namespace std;

int main()
{
    cout << "ASCII Code Table:\n";
    cout << "+--------+---------+\n";
    cout << "|  char  |  ASCII  |\n";
    cout << "+--------+---------+\n";
    for(int i=0; i<128; i++)
    {
        char x = char(i);
        cout << "|    " << x << "  |   " << i <<  "   |\n";    
    }
    return 0;
}