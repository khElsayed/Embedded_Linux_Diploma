#include <iostream>
#include <iomanip>      // used to manipulate input and output 
using namespace std;

int main()
{
    cout << "ASCII Code Table:\n";
    cout << "+----------+----------+\n";
    cout << "|   Char   |  ASCII   |\n";
    cout << "+----------+----------+\n";
    for (int i = 0; i < 128; i++)
    {
        string charName;
        switch (i)
        {
            case 0: charName = "NULL"; 
                break;
            case 7: charName = "BEL"; 
                break;
            case 8: charName = "BKSP"; 
                break;
            case 9: charName = "TAB"; 
                break;
            case 10: charName = "LiFe"; 
                break;
            case 13: charName = "CR"; 
                break;
            default: charName = ""; 
                break;
        }
        cout << "|   " << setw(4) << left << (charName.empty() ? string(1, i) : charName) <<  "   |   " << setw(4) << i << "   |\n";
    }
    return 0;
}
