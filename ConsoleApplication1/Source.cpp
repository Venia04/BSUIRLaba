#include <iostream>
#include <cmath>

using namespace std;

double getValue(string x)
{
    while (true)
    {   
        cout << "\nEnter a double [" << x << "] value: ";
        double a;
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "ERROR: Not a number!\n";
        }
        else 
        return a;
    }
}

double divZero(double x) 
{
    if (x == 0)
    {
        cout << "ERROR: Divided by ZERO!\n\n";
    }
    else
        return x;
}

double sqrtMinus(double x)
{
    if (x < 0) {
        cout << "ERROR: sqrt from MINUS number!\n\n";
    }
    else
        return x;
}

int main()
{
    cout << "Hello World!\n"; //test

    double a = getValue("a");
    cout << "a = " << a << "\n";

    double b = getValue("b");
    cout << "b = " << b << "\n";

    divZero(b);

}
