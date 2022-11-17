#include <iostream>

using namespace std;

int main(){

    int input;
    int index = 0;
    string str[3] = {"ascending", "descending", "mixed"};

    for(int i = 0; i < 8; i++){
        cin >> input;
        
        if( i == 0 ){
            if(input == 1)
                index = 0;
            else if(input == 8)
                index = 1;
            else
                index = 2;

            continue;
        }

        if( index == 0 && input != i + 1)
            index = 2;

        else if( index == 1 && input != 8 - i)
            index = 2;

    }

    cout << str[index];

    return 0;
}