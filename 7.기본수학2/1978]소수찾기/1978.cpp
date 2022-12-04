#include <iostream>
#include <cmath>
using namespace std;
// 첫 줄에 수의 개수 N이 주어진다.N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
// 에라스토테네스의 체
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
