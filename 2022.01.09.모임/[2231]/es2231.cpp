#include <iostream>

using namespace std;

int main(){

    int input;
    int i = 0, result = 0;
    cin >> input;

    while(result != input){
        if( input == i){
            cout << 0;
            return 0;
        }
        
        result = 0;
        i++;

        for(int j = i; j > 0; j /= 10){
            result += j % 10;
        }

        result += i;
    }

    cout << i;

    return 0;
}