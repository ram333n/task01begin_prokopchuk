#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 8;
    int sum = a * a + b * b;
    int del = a * a - b * b;
    int mult = a * a * b * b;
    double div = (a * a) / (b * b);
    cout << "sum = " << sum;
    cout << "del = " << del;
    cout << "mult = " << mult;
    cout << "div = " << div;
}