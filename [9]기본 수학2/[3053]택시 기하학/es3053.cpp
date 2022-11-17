#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int r;

    cin >> r;

    cout << fixed;
    cout.precision(7);

    cout << r * r * M_PI << '\n';
    cout << r * r * 2.0 << '\n';

    return 0;
}