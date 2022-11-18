#include <iostream>
using namespace std;

/*
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
*/
int self(int num){
    int res=0;
    res=num; // add itself;
    while(num>=10){
        res+=num%10;
        num=num/10;
    }
    res+=num; // if num<10 -> add itself twice;

    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int res[10001]={0};
    int returnself=0;

    // n == d(n)'s maker
    // No maker == self number ex)1 3 5 7 9 ...
    for(int i=1;i<=10000;i++){
        returnself=self(i);
        if(returnself<=10000){ // less 10000 maker
            //
            res[returnself]=1;
        }
    }
    for(int i=1;i<=10000;i++){
        if(res[i]==0) cout<<i<<"\n";
    }

    return 0;
}
