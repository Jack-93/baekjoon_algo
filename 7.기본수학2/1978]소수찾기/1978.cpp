#include <iostream>
#include <cmath>
using namespace std;
// ù �ٿ� ���� ���� N�� �־�����.N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.
// �������׳׽��� ü
int main()
{
    int n = 0;
    bool prime[n + 1];
    int count = 0;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        prime[i] = true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
                if (prime[j] == false)
                    count++;
            }
    }
    cout << count;

    return 0;
}
