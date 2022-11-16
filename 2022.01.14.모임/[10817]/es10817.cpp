#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int input;
    vector<int> v;

    for(int i = 0; i < 3; i++){                 //3개의 숫자를 받아서 하나의 벡터에 넣음
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());                   //벡터째로 오름차순 정렬

    cout << v[1];                               //벡터의 두 번째 있는 값이 중간 값

    return 0;

}