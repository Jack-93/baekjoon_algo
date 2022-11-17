#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long x, y;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        double d = y - x;    //사이의 거리
        double zegop = sqrt(d);     //거리의 제곱근
        int olim = round(sqrt(d));  //제곱근을 반올림

        if (zegop <= olim)
            cout << olim * 2 - 1 << '\n';
        else
            cout << olim * 2 << '\n';
    }
    return 0;
}