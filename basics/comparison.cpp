#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;

    if (a == b)
    {
        cout << "a and b are equal" << endl;
    }
    else if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is less than b" << endl;
    }
}