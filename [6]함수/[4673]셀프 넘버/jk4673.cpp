#include <iostream>
using namespace std;

int notself(int self)
{
    int add = 0;

    add = self;
    while (self >= 10)
    {
        add += self % 10;
        self /= 10;
    }

    add += self;
    return add;
}
int main()
{
    //d(75)=75+7+5=87 75는 87의 생성자
    //브루트포스

    // int num;
    // cin >> num;
    // cout << notself(num);

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10001] = {0}; // outofbound 원인 : 배열 범위 지정 10000으로 했음
    int self = 0;
    int count = 0;

    for (int i = 1; i <= 10000; i++)
    {
        // self = !notself(i); -> bool형식?

        self = notself(i); //notself수를 저장
        if (self <= 10000)
        {
            arr[self]++; //count식으로 ++해서 ++된 수는 notself수 이므로 아니면 셀프넘버
        }
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i] == 0) // 카운트==0
        {
            cout << i << "\n";
        }
    }

    return 0;
}