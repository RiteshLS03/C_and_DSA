#include <iostream>
using namespace std;

float areaOfRoom(float height, float width, float length)
{
    float area = (2 * (length * height)) + (2 * (width * height));
    // cout << area;
    return area;
}

int main()
{
    float height = 1100;
    float width = 10;
    float length = 10;

    cout << areaOfRoom(height, width, length);
    return 0;
}