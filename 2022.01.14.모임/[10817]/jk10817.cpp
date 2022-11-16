#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int max2 = 0;

    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        max2 = (b >= c) ? b : c;
    }
    else if (b >= a && b >= c)
    {
        max2 = (a >= c) ? a : c;
    }
    else if (c >= a && c >= b)
    {
        max2 = (a >= b) ? a : b;
    }

    cout << max2;

    return 0;
}