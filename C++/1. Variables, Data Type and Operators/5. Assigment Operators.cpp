#include <iostream>
using namespace std;

int main()
{
    int x = 10; // assgin the value to the variable
    cout << x << endl;

    x += 2; // assgin the value after adding by 2
    cout << x << endl;

    x -= 3; // assign the value after subtracting by 3
    cout << x << endl;

    x *= 3; // assign the value after multipling by 3
    cout << x << endl;

    x /= 3; // assign the value after divison by 3
    cout << x << endl;

    x %= 3; // assign the value after modulos by 3
    cout << x << endl;

    x &= 3; 
    cout << x << endl;

    x |= 3; 
    cout << x << endl;

    x ^= 2; 
    cout << x << endl;

    x >> 2; // assign the value after shifting value by 2 by right
    cout << x << endl;

    x << 2; // assign the value after shifting value by 2 by left
    cout << x << endl;

    return 0;
}