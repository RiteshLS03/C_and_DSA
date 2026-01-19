#include <iostream>
using namespace std;

int sumOfFive(int number)
{
    int sum = 0;
    int singleDigit;
    while (number > 0)
    {
        singleDigit = number % 10;
        sum += singleDigit;
        number = number / 10;
    }
    return sum;
}

int main()
{
    cout << sumOfFive(12345);
    return 0;
}