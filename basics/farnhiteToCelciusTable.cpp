#include <iostream>
using namespace std; 

int main()
{
    int start, end, diff;
    cout << "Enter the value of start and end: ";
    cin >> start >> end;
    cout << "Enter the value of diff: "; 
    cin >> diff;

    while(start <= end)
    {
        /* code to convert far to cel*/
        int cel = (5.0/9)*(start-32);
        cout << start << " " << cel << endl;
        start = start + diff;
    }

}