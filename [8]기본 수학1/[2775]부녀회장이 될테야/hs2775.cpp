#include <iostream>
using namespace std;

int main()
{
    int apt[15][15] = {0};

    for (int i = 0; i < 15; i++)
    {
        apt[0][i] = i;                      // 0층
    }

    for (int f = 1; f < 15; f++)            // 층 floor
    {
        for (int n = 1; n < 15; n++)        // 호수 num
        {
            for (int p = 1; p <= n; p++)    // 사람수 people
            {
                apt[f][n] += apt[f - 1][p];
            }
        }
    }

    int t, k, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << apt[k][n] << "\n";
    }
    return 0;
}