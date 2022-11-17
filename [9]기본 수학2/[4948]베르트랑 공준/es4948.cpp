#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int input;
    bool *arr;
    int count;
    while(1){
        cin >> input;
        
        if(input == 0)
            break;

        count = 0;
        arr = new bool[input * 2 + 1]{false};
        arr[0] = true;
        arr[1] = true;        

        for(int i = 2; i <= sqrt(input * 2) ; i++){
            if(arr[i])
                continue;
            
            for(int j = 0; (i * i) + (i * j) <= input * 2; j++)
                arr[i*i + i *j] = true;

        }
        
        for(int i = input + 1; i <= input * 2; i++){
            if(arr[i] == false)
                count++;
        }
        cout << count << '\n';

        delete[] arr;
    }
    return 0;
}