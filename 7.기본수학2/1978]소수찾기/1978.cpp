#include <iostream>
#include <cmath>
using namespace std;
// ù �ٿ� ���� ���� N�� �־�����.N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.
// 1 != prime
int main()
{
    int n = 0;
    int count = 0;
    cin >> n;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        for (int j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                break;
            }
            else
            {
                count++;
                break;
            }
        }
    }

    cout << count;
    return 0;
}
