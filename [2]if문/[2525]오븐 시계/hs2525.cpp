#include <iostream>
using namespace std;

int main()
{
    int h;
    int m;
    int c;

    cin >> h >> m >> c;

    int hour = (h + (m + c) / 60) % 24;
    int min = (m + c) % 60;

    cout << hour << " " << min;

    return 0;
}