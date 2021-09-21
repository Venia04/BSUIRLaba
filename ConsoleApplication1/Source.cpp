#include <iostream>
#include <cmath>

using namespace std;

double getValue(string x)
{
    while (true)
    {   
        cout << "Enter a double [" << x << "] value: ";
        double a;
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
        }
        else 
        return a;
    }
}

double divZero() 
{

}

int main()
{
    cout << "Hello World!\n"; //test

    double a = getValue("a");
    cout << "a= " << a << "\n";

    double b = getValue("b");
    cout << "b= " << b << "\n";

}
