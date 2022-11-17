#include <iostream>
using namespace std;

int main(){
    int n;
    int num = 0;        //영화 시리즈 수
    int count = 0;      //영화 종말 수
    
    cin >> n;
    
    while (count != n)
    {
        num++;
        int temp = num;

        while (temp != 0)         //6의 갯수 확인
        {
            if (temp % 1000 == 666)
            {
                count++;
                break;
            }
            else
                temp /= 10;
        }
    }
    cout << num;

    return 0;
}