#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int main()
{
    int x = 5;

    printf("%d", sum(x));

    // printf("%d", x * (x + 1) / 2);
    return 0;
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
