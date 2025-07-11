/* 
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x. 

Example 1:
Input: n = 1
Output: true
Explanation: 20 = 1

Example 2:
Input: n = 16
Output: true
Explanation: 24 = 16

Example 3:
Input: n = 3
Output: false

Constraints:
-231 <= n <= 231 - 1

Follow up: Could you solve it without loops/recursion?
*/


// Solution
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        if (n <= 0){
            return false;
        }else if (n == 1){
            return true;
        }else {
            while (n % 2 == 0){
                n = n / 2;
            }
            if (n == 1){
                return true;
            }else {
                return false;
            }
        }
}

int main()
{
    int test, num;
    bool result;
    cout << "Enter the number of test case: " << endl;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cout << "Enter the number: " << endl;
        cin >> num;
        result = isPowerOfTwo(num);
        if (result == 1){
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
        
    }

    return 0;
}