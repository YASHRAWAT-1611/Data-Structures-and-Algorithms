#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter any number: ";
    cin >> num;

    if (num % 2 == 0 && num != 0)
    {
        cout << "Even Number" << endl;
    }else if (num == 0)
    {
        cout << "Zero" << endl;
    }else {
        cout << "Odd Number" << endl;
    }
    

    return 0;
}