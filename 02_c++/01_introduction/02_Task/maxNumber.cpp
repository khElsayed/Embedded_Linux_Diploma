#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter 3 numbers to find the maximum number:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a>b && a>c)
        cout << "The maximum number is " << a << endl;
    else if(b>a && b>c)
        cout << "The maximum number is " << b << endl;
    else
        cout << "The maximum number is " << c << endl;
}

