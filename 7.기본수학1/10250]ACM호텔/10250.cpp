#include <iostream>

using namespace std;
// (1 ≤ H, W ≤ 99). 그리고 엘리베이터는 가장 왼쪽에 있다고 가정하자(그림 1 참고).
// 이런 형태의 호텔을 H * W 형태 호텔이라고 부른다.
// 방 번호는 YXX 나 YYXX 형태인데 여기서 Y 나 YY 는 층 수를 나타내고
// XX 는 엘리베이터에서부터 세었을 때의 번호를 나타낸다

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
