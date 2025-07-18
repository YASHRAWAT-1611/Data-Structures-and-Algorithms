#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter any number: " ;
    cin >> a;
    cout << "Enter any number: " ;
    cin >> b;

    cout << "The sum of the given numbers " << a << " and " << b << " is " << a + b << endl;
    cout << "The difference of the given numbers " << a << " and " << b << " is " << a - b << endl;
    cout << "The product of the given numbers " << a << " and " << b << " is " << a * b << endl;
    cout << "The division of the given numbers " << a << " and " << b << " gives " << a / b << endl;
    cout << "The floor division of the given numbers " << a << " and " << b << " gives " << a % b << endl;
    cout << "The increment of the given number is " << ++a << endl;
    cout << "The increment of the given number is " << ++b << endl;
    cout << "The decrement of the given number is " << --a << endl;
    cout << "The decrement of the given number is " << --b << endl;

    return 0;
}