#include <stdio.h>

int factorialOf(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n * factorialOf(n - 1);
    }
}

int main()
{

    int x = 5;

    printf("%d", factorialOf(x));
    return 0;
}