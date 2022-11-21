#include <iostream>
using namespace std;

/*
1 -1
2 3 4 5 6 7 -6
8 9 10 11 12 13 14 15 16 17 18 19 -12
20 ~ 37 -18
38 ~ 61 -24
-> y = 6x;
*/
int main(){
    long long y=1;
    long long room_number=0;

    int count=1;
    int line=1;

    cin>>room_number;

    if(room_number==1){
        cout<<"1";
        return 0;
    }
    // ex room_number==61 -> 6 ??

    // 61>=1 {y=6, count=2}
    // 61>=7 {y=12, count=3}
    // 61>=19 {y=18, count=4}
    // 61>=37 {y=24, count=5}
    // 61>=61
    else{
        while(room_number>y){
            y+=6*count;
            count++;
        }
    }
    cout<<count;

    return 0;
}
