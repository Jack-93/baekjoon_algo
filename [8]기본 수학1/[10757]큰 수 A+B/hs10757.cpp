#include <iostream>
using namespace std;

int main()
{
    string a, b, c;
    string result;

    cin >> a >> b;

    // 1을 0001로 만들기
    if (a.size() > b.size())
    {
        for (int i = 0; i < a.size() - b.size(); i++)
        {
            c += '0';
        }
        b = c + b;
    }
    else
    {
        for (int i = 0; i < b.size() - a.size(); i++)
        {
            c += '0';
        }
        a = c + a;
    }

    int num = 0;
    while (a.size() != 0 && b.size() != 0)
    {
        int aback = a.back() - '0';     //맨 마지막 숫자를 바꾼다
        int bback = b.back() - '0';
        int remain = (num + aback + bback) % 10;  //남기는 수
        num = (num + aback + bback) / 10;         //올리는 수
        result = char(remain + '0') + result;     //result에 합침
        a.pop_back();                             //맨 뒤의 값 삭제
        b.pop_back();
    }
    if (num)         //마지막 자리까지 더했지만 num가 있으면 num을 맨 앞에 붙임
    {
        result = char(num + '0') + result;
    }
    cout << result;

    return 0;
}