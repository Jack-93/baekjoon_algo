#include <iostream>
#include <cmath>
using namespace std;

bool prime(int i)
{
    int num;
    num = sqrt(i);
    if (num == 1 && i != 1)
        return true;
    if (i % 2)
    {
        for (int j = 2; j <= num; j++)
        {
            if (!(i % j))
                return false;
            if (j == num)
                return true;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = n / 2; i >= 2; i--) // i가 소수인지 확인하려고 n/2로까지 돌려도 확인 가능
        {
            if (prime(i) && prime(n - i))
            {
                cout << i << " " << n - i << '\n';
                break;
            }
        }
    }
    return 0;
    // n이 8일경우 n/2부터 2까지 돌려서 i와 n-i가 모두 소수인지 확인하고 출력
}