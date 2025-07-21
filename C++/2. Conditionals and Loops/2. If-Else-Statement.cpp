#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligable" << endl;
    } else {
        cout << "Not Eligable" << endl;
    }

    return 0;
}