#include <iostream>

using namespace std;

int main(){

    int input;
    int start = 1, i = 1;

    cin >> input;

    while(1){
        
        if( input >= start && input < start + i){
            input -= start;
            if(i % 2) 
               cout << (i - input) << "/" << input + 1;
            else
               cout << input + 1 << "/" << (i - input);
            break;
        }
        
        else{
            start += i;
            i++;
        }

    }

    return 0;
}