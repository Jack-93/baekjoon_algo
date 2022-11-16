#include <iostream>    //에라토스테네스
#include <stdbool.h>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    bool prime[1000001] = {false};

    cin >> m >> n;

    for (int i = 2; i < 1000000; i++)
    {
        prime[i] = false;
    }

    prime[1] = true;

    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (prime[i] == false)
        {
            for (int j = i + i; j <= 1000000; j += i)
                prime[j] = true;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (!prime[i])
            cout << i << '\n';
    }

    return 0;
}