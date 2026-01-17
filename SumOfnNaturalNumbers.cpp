#include <stdio.h>

int sum = 0;
int sumOfN(int n)
{
    if (n == 0)
    {
        return sum + n;
    }
    else if (n == 1)
    {
        return sum + n;
    }
    else if (n > 1)
    {
        return sumOfN(n - 1);
    }
}

// int sumOfN(int n)
// {
//     int sum = 0;
//     for (int i = n; i > 0; i--)
//     {
//         sum += i;
//     }
//     return sum;
// }

int main()
{
    int x = 5;

    printf("%d", sumOfN(x));

    // printf("%d", x * (x + 1) / 2);
}