/* 
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome. 

Constraints:
-231 <= x <= 231 - 1

Follow up: Could you solve it without converting the integer to a string?
*/

// Solution
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0){
        return false;
    } 

    long long n = x;
    long long revNum = 0;

    while (n > 0){
        int d = n % 10;
        revNum = revNum * 10 + d;
        n = n / 10;
    }

    if (revNum == x){
        return true;
    } else {
        return false;
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
        result = isPalindrome(num);
        if (result == 1){
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
        
    }

    return 0;
}