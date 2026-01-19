#include <iostream>
using namespace std;

// which is greater

int main()
{
    int num1, num2;

    cin >> num1 >> num2;
    if (num1 == num2)
    {
        cout << "Both are the same";
    }
    else if (num1 > num2)
    {
        cout << "Num 1 is greater than Num2 " << num1;
    }
    else
    {
        cout << "Num 2 is greater than Num1 " << num2;
    }
}