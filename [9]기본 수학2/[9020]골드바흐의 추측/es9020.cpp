#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int t, n;
    bool arr[10001] = {false};

    arr[0] = arr[1] = true;

    for(int i = 2; i < sqrt(10001); i++){
        if(arr[i])
            continue;
        
        for(int j = 0; i * i + i * j <= 10000; j++){
            arr[i * i + i * j] = true;
        }
    }

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = n / 2; j >= 2; j--){
            if(arr[j] == false && arr[n - j] == false){
                cout << j << ' ' << n - j << '\n';
                break;
            }
        }
    }
    return 0;
}