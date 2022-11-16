#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int result;

    cin >> a >> b >> c;

    if (b >= c)
    {
        cout << -1;
    }
    else
    {
        result = a / (c - b) + 1;
        cout << result;
    }
    return 0;
}