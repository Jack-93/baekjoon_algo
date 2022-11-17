#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int res[42] = {0};
    int num[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        // res[i] = num[i] % 42; -> res[0~9] : 41개의 나머지를 모두 구분할 수 없다 (계산실패)
        res[num[i] % 42]++;
        // 0<=res[i]<=41;
    }
    for (int i = 0; i < 42; i++)
    {
        if (res[i] != 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}