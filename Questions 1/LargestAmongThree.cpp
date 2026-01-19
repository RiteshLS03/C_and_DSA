#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << "is greater than others";
        }
        else
        {
            cout << num1 << "is less than than" << num3;
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num1)
        {
            cout << num2 << "is largest among all";
        }
        else
        {

            cout << num1 << "is largest among all";
        }
    }
    else
    {
        cout << num3 << "is largest among all";
    }
}