#include <iostream>
#include <vector>
using namespace std;

/*
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
*/
int self(int num){
    int res=0;
    res+=num;
    while(num>=10){
        res+=num%10;
        num=num/10;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool res[10000]={0,};
    int resturnself=0;

    // n == d(n)'s maker
    for(int i=1;i<=10000;i++){
        resturnself=self(i);
    }

    return 0;
}
