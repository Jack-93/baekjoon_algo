#include <iostream>
using namespace std;

// ��a���� bȣ�� ����� �ڽ��� �Ʒ�(a-1)���� 1ȣ���� bȣ���� ������� ���� �ո�ŭ
// ������� ������ ��ƾ� �Ѵ١�
// �־����� ���� ���� k�� n�� ���� k���� nȣ���� �� ���� ��� �ִ��� ����϶�.
// ��, ����Ʈ���� 0������ �ְ� �������� 1ȣ���� ������, 0���� iȣ���� i���� ���.

// ù ��° �ٿ� Test case�� �� T�� �־�����.
// �׸��� ������ ���̽����� �Է����� ù ��° �ٿ� ���� k, �� ��° �ٿ� ���� n�� �־�����

// DP Algorithm
int main(){
    int test_case=0;
    int k,n=0;
    cin>>test_case;

    for(int m=0;m<test_case;m++){
        cin>>k>>n;
        int arr[k+1][n+1];;
        int all_number[]={0,};
        // floor 0 ~ k
        for(int i=0;i<=k;i++){
            // room number 1 ~ n, arr[i][j];
            // initialize needs
            for(int j=1;j<=n;j++){
                arr[0][j]=j;
                arr[i][1]=1;
                if(i>0 && j>1) arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }
        }
        cout<<arr[k][n]<<"\n";
    }
    return 0;
}
