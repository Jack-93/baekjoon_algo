#include <iostream>
using namespace std;

int func(int input){
    int count=0;
    if(input < 100 ) return input;
    else{
        count = 99;
        for(int i = 100; i <= input; i++){
            int num1 = i / 100; //100
            int num2 = (i / 10) % 10; //10
            int num3 = i % 10; //1
            if((num1 - num2) == (num2 -num3)) count++;
        }
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    cin>>input;
    int count=0;

    cout<<func(input);

    return 0;
}
