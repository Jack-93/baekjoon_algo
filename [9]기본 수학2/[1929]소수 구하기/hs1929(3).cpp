#include <iostream>         //dp알고리즘
#include <vector>

//   v.pushback(값이나 변수) = v의 맨 뒤에 상수나 변수의 값을 추가
//   v.end() = v의 크기
//   v[i] = v벡터의 i번째 값
using namespace std;

int main(){

    int n;
    vector<int> v;                    // 소수가 들어있는 배열(벡터)
    bool prime = true;

    cin >> n;

    v.push_back(2);

    for (int i = 3; i <= n; i++)
    {
        prime = true;

        for (int j = 0; j < v.size(); j++)
        {
            if (i % v[j] == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime == true)
            v.push_back(i);
    }

    for(auto i : v){
        cout << i <<'\n';
    }
    return 0;
}