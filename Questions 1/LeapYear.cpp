#include <iostream>
using namespace std;

int isLeapYear(int year)
{

    if (year <= 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return isLeapYear(year / 4);
    }
}

int main()
{

    cout << isLeapYear(2016);

    return 0;
};