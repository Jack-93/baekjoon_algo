#include <iostream>
using namespace std;

//
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input[3];
    int gold;
    for(int i=0;i<3;i++){
      cin>>input[i];
    }
    if(input[0]==input[1] && input[1]==input[2] && input[2]==input[0]){
        gold=10000+(input[0]*1000);
    }
    else if(input[0]==input[1] || input[1]==input[2] || input[2]==input[0]){
        if(input[0]==input[1] || input[0]==input[2]) gold=1000+(input[0]*100);
        else if(input[1]==input[2] || input[1]==input[0]) gold=1000+(input[1]*100);
        else if(input[2]==input[0] || input[2]==input[1]) gold=1000+(input[2]*100);
    }
    else if(input[0]!=input[1] && input[1]!=input[2] && input[2]!=input[0]){
        if(input[0]>input[1] && input[0]>input[2]) gold=input[0]*100;
        else if(input[1]>input[0] && input[1]>input[2]) gold=input[1]*100;
        else if(input[2]>input[1] && input[2]>input[0]) gold=input[2]*100;
    }

    cout << gold;
    return 0;
}
