#include <iostream>
#include <cstring>

using namespace std;
// ���� 1�� �ɷ��� �� 2�ʰ� �ʿ��ϴ�. 1���� ū ���� �Ŵµ� �ɸ��� �ð��� �̺��� �� �ɸ���,
// �� ĭ ���� �ִ� ���ڸ� �ɱ� ���ؼ� 1�ʾ� �� �ɸ���.
// number[0] == 2 sec
// number[1] == 3 sec, ABC
// number[2] == 4 sec, DEF ...
// 'A' == ASCII 65
int main()
{
    char input[16]; //length : 2~15
    int number[10];
    int sum=0;

    cin>>input;

    for(int i=1;i<10;i++){
        // 1 -> 2sec, 2 -> 3sec
        number[i]=i+1;
    }
    for(int i=0;i<strlen(input);i++)
    {
        //cout<<input[i];
        if('A' <= input[i] && input[i]<='C') sum+=number[2]; // 2 sec
        else if('D' <= input[i] && input[i]<='F') sum+=number[3];//DEF
        else if('G' <= input[i] && input[i]<='I') sum+=number[4];//GHI
        else if('J' <= input[i] && input[i]<='L') sum+=number[5];//JKL
        else if('M' <= input[i] && input[i]<='O') sum+=number[6];//MNO
        else if('P' <= input[i] && input[i]<='S') sum+=number[7];//PQRS
        else if('T' <= input[i] && input[i]<='V') sum+=number[8];//TUV
        else if('W' <= input[i] && input[i]<='Z') sum+=number[9];//WXYZ
        else return 0;
    }
    cout<<sum;


	return 0;
}
