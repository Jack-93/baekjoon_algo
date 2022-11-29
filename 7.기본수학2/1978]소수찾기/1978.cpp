#include <iostream>
#include <cmath>
using namespace std;
// 첫 줄에 수의 개수 N이 주어진다.N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
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
