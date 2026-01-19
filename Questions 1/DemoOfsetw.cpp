#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(2) << 1 << endl;
    cout << setw(2) << 12 << endl;
    // cout << setw(3) << 123 << endl;
    // cout << setw(1) << 123;

    cout << setw(5) << 1 << endl;
    cout << setw(5) << 12 << endl;
    cout << setw(5) << 123 << endl;

    return 0;
}