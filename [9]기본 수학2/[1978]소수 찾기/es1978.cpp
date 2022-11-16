#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){

    bool pCheck;
    vector<int> v;
    int n, input, count = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;
        pCheck = true;

        if(input == 1 )
            continue;
        
        if(input == 2){
            count++;
            continue;
        }

        for(int j = 2; j < sqrt(input) + 1; j++){
            if(input % j == 0){
                pCheck = false;
                break;
            }
        }

        if(pCheck)
            count++;
    }

    cout << count;
    return 0;
}