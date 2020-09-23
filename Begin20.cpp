#include <iostream>
using namespace std;

int main()
{
    int x1 = 5;
    int y1 = 8;
    int x2 = -2;
    int y2 = -10;
    double l = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    cout << "L = " << l;
}