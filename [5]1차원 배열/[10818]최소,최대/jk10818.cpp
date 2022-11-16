#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;                           // 정수의 갯수
    int max = -1000000, min = 1000000; //최대,최소수를 지정해야함 -> 실패원인
    cin >> num;
    int x[num];

    for (int i = 0; i < num; i++)
    {
        cin >> x[i];

        if (x[i] > max)
        {
            max = x[i];
        }
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    cout << min << " " << max;

    return 0;
}