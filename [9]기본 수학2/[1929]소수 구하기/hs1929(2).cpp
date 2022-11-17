#include <iostream>   // 브루트포스
using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
                m++;
        }

        if (m == 1)
            cout << i;
    }
}