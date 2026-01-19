#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " num1 is greater than others";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " nu2 is greather than others";
    }
    else
    {
        cout << num3 << " num3 is greater than others";
    }
}