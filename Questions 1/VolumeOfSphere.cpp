#include <iostream>
using namespace std;

float volumeOfSphere(float radius)
{
    return (4.0f / 3.0f) * 3.141592653589793 * (radius * radius * radius);
}

int main()
{

    cout << volumeOfSphere(20);
    return 0;
}