#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r;
    cout << fixed;
    cout.precision(6);
    cin >> r;

    cout << r * r * M_PI << '\n' << 2 * r * r << '\n';

    return 0;
}