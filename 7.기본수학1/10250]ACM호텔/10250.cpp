#include <iostream>

using namespace std;
// (1 �� H, W �� 99). �׸��� ���������ʹ� ���� ���ʿ� �ִٰ� ��������(�׸� 1 ����).
// �̷� ������ ȣ���� H * W ���� ȣ���̶�� �θ���.
// �� ��ȣ�� YXX �� YYXX �����ε� ���⼭ Y �� YY �� �� ���� ��Ÿ����
// XX �� ���������Ϳ������� ������ ���� ��ȣ�� ��Ÿ����

// ex) 6 12 10 -> max 612,
// h,w - guest relation
int main(){
    int test=0;
    int h,w,guest=0;

    cin>>test;
    int arr[10001];

    for(int i=0;i<test;i++){
        cin>>h>>w>>guest;
        int room[w+1][h+1];
        int count=0;
        for(int i=1;i<=w;i++)
        {
            for(int j=1;j<=h;j++)
            {
                room[i][j]=j*100+i;
                count++;
                if(count==guest) {
                    arr[j]=room[i][j];
                    cout<<arr[j]<<"\n";
                }
            }
        }
    }
    //for(int i=1;i<=test;i++) cout << arr[i] <<"\n";

    return 0;
}
