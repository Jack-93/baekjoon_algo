#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string str;                         //입력 받을 스트링
    string rstr;                        //뒤집을 스트링

    while(1){
        cin >> str;                                     //str 입력
        rstr = "";
        if(str == "0")                                  // 입력받은 값이 0이면 탈출
            break;
            
        for(int i = str.size() - 1; i >= 0; i--)
            rstr.push_back(str.at(i));                 //스트링의 맨 뒤부터 하나씩 rstr에 푸쉬
             
        if(str == rstr){                            //입력받은 스트링과 뒤집은 스트링 비교 같으면 yes 아니면 no 출력
            cout << "yes\n";
            continue;
        }
        cout << "no\n";
    }

    return 0;
}