// Given an integer n, return true if it is a power of three. Otherwise, return false.
// An integer n is a power of three, if there exists an integer x such that n == 3x.
// Example 1:
// Input: n = 27
// Output: true
// Explanation: 27 = 33
// Example 2:
// Input: n = 0
// Output: false
// Explanation: There is no x where 3x = 0.
// Example 3:
// Input: n = -1
// Output: false
// Explanation: There is no x where 3x = (-1).
// Constraints
// -231 <= n <= 231 - 1
// Follow up: Could you solve it without loops/recursion?

#include <stdio.h>
#include <stdlib.h>

bool powerOfThree(int n)
{
    if (n <= 0)
    {
        return false;
    }
    else if (n == 1)
    {
        return true;
    }
    else if (n == 2)
    {
        return false;
    }

    if (n % 3 == 0)
    {
        return powerOfThree(n / 3);
    }
    else
    {
        return false;
    }
}

int main()
{
    int x = 27;
    printf("%d", powerOfThree(x));
    return 0;
}
