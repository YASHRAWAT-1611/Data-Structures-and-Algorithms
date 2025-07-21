#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter any number: ";
    cin >> age;

    string result = (age >= 18) ? "Eligible" : "Not Eligible";
    cout << result << endl;

    return 0;
}