#include <iostream>
using namespace std;

int d(int n)
{
    int num = n;

    while (n > 0)
    {
        num += n % 10;
        n = n / 10;
    }

    return num;
}

int main()
{
    int arr[10001];
    int temp;

    for (int i = 0; i < 10001; i++)
    {
        temp = d(i);

        if (temp < 10001)
        {
            arr[temp] = 1;
        }
    }

    for (int i = 0; i < 10001; i++)
    {
        if (arr[i] != 1)
        {
            cout << i << '\n';
        }
    }

    return 0;
}