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
    int y;
    int room_number;
    int line=1;
    int count=1;
    int i=1;
    cin>>room_number;
    if(room_number==1) cout<<"1";
    else{
        while(i++)
        {
            y=line+1;
            line+=6*count;

            if(y<=room_number && room_number <=line) {
                cout<<i+1;
                break;
            }
        }
    }


    cin>>room_number;


    return 0;

}
