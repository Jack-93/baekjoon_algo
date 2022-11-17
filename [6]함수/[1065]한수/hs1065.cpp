#include <iostream>
#include <stdbool.h>
using namespace std;

bool Ispositive(int num)
{
    int n;

    int cha = num % 10 - (num / 10 % 10);

    while (num > 9)
    {
        int a = num % 10;
        num /= 10;
        int b = num % 10;

        if (cha != a - b)
            return false;
    }

    return true;
}

int main()
{
    int n;
    int count = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if ((i / 10) < 10)
        {
            count++;
            continue;
        }

        if (Ispositive(i))
            count++;
    }

    cout << count;

    return 0;
}