#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string ins;   // 원래 값 입력
    string reins; // 값을 역으로 대입

    while (1)
    {
        cin >> ins;
        reins = ins;
        reverse(ins.begin(), ins.end());

        if (ins == "0") // 무의미한 0은 취소
        {
            return 0;
        }
        else if (ins == reins) // 기존=역이면 펠린드롬수
        {
            cout << "yes"
                 << "\n";
            continue;
        }
        else if (ins != reins) // 다르면 아니다
        {
            cout << "no"
                 << "\n";
            continue;
        }
    }
    return 0;
}