#include <iostream>
#include <cstring>
// ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����,
// kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������,
// aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
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
