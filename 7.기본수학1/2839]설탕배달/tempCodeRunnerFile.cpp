#include <iostream>
using namespace std;
// 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
// 8킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만,
// 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.

// 첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)
// 상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.
int main(){
    // n = 3kg * i + 5kg * j; (i,j>=0)
    int n;
    int count=0;
    cin>>n;

    while(n>=0){
        if(n<5){
            if(n%3==0) {
                count++;
                cout<<count;
            }
            else if(n%3!=0){
                cout<<"-1";
                break;
            }
        }
        n-=5;
        count++;
    }

    return 0;
}
