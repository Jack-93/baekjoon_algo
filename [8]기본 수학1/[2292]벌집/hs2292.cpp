#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;

    cin >> n;

    for (int num = 2; num <= n; i++)
    {
        num += 6 * i;
    }
    cout << i;

    return 0;
}