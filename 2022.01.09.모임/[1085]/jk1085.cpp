#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h; // (0,0) ~ (w,h)
    int comx;
    int comy;

    cin >> x >> y >> w >> h;

    if (w - x < x)
    {
        comx = w - x;
    }
    else
    {
        comx = x;
    }
    if (h - y < y)
    {
        comy = h - y;
    }
    else
    {
        comy = y;
    }

    if (comx < comy)
    {
        cout << comx;
    }
    else
    {
        cout << comy;
    }

    return 0;
}