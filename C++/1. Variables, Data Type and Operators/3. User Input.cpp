#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: " ;
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age ;

    cout << name << " Welcome to C++ Programing" << endl;

    return 0;
}