#include <iostream>
using namespace std;

int main()
{
    int n;
    int five;
    int three;

    cin >> n;

    five = n / 5;

    while (1)
    {
        if (five < 0)
        {
            cout << -1 << '\n';
            return 0;
        }

        if ((n - (5 * five)) % 3 == 0)
        {
            three = (n - (5 * five)) / 3;
            break;
        }
        five--;

    }
    cout << five + three << '\n';

    return 0;
}