#include <iostream>
#include <cstring>

using namespace std;

//�� ���� ���� ���� �� �ڸ� ���̸�
//����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�

int reverse(int input){
    int a=input;
    int result=0;

    int hund,ten,one=0;
    one=a%10;
    ten=(a/10)%10;
    hund=a/100;

    result = (one*100)+(ten*10)+(hund);

    return result;
}
int main()
{
    int a,b;
    int inputstring;

    cin>>a>>b;

    int res=(reverse(a)>reverse(b))?reverse(a):reverse(b);
    cout<<res;


	return 0;
}
