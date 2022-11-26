#include <iostream>
using namespace std;

// “a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼
// 사람들을 데려와 살아야 한다”
// 주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 출력하라.
// 단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.

// 첫 번째 줄에 Test case의 수 T가 주어진다.
// 그리고 각각의 케이스마다 입력으로 첫 번째 줄에 정수 k, 두 번째 줄에 정수 n이 주어진다

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
