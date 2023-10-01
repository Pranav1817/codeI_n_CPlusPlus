#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if( 'a' <= ch && ch <= 'z')
    {
        cout << '0' << endl;
    }else if( 'A' <= ch && ch <= 'Z')
    {
        cout << '1' << endl;
    }else{
        cout << '-1' << endl;
    }
}