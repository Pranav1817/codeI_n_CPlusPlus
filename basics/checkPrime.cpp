#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int i = 2;
    bool isPrime = true;
    while(i<n)
    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
        i++;
    }

    if(isPrime){
        cout << "Given number is Prime";
    }else{
        cout << "Given number is not Prime";
    }
}