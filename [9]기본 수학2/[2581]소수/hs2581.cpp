#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int count = 0;
    int result = 0;
    int min;
    int num = 0;   //소수 갯수

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }

        if (count == 2)
        {
            num++;
            result += i;

            if (num == 1)
                min = i;
        }
        count = 0;
    }

    if (num == 0)
    {
        min = -1;
        cout << min << '\n';
    }
    else
    {
        cout << result << '\n' << min << '\n';
    }
    return 0;
}