#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e; // 00000+x; x=각자리 제곱의 합%10;
    int x = 0;

    cin >> a >> b >> c >> d >> e;
    x = ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;
    cout << x;

    return 0;
}