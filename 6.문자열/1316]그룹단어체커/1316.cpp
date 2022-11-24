#include <iostream>
#include <cstring>
// ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고,
// kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만,
// aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
using namespace std;

int checker(int test_number, char in[]){
    int count=test_number; // group x -> count--;
    bool alpha[26]={false,}; // init false , if show alphabet -> true;

    for(int i=0;i<strlen(in);i++){
        if('a'<=in[i] && in[i]>='z') alpha[i]=true;
    }


}
int main()
{
    int test_number=0;
    char input[101];

    cin>>test_number;
    for(int i=0;i<test_number;i++){
        cin>>input;
    }
    checker(test_number, input);

	return 0;
}
