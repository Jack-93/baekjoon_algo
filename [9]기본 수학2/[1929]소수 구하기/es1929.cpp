#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int m, n;
    bool arr[1000001] = { false };

    arr[1] = true;
    
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    cin >> m >> n;

    for(int i = 2; i <= sqrt(n) + 1; i++){
        if(arr[i])
            continue;
        for(int j = 2; i * j <= n; j++){
            arr[i * j] = true;
        
        }

    }

    for(int i = m ; i <= n; i++){
        if(!arr[i])
            cout<< i <<'\n';
    }
    return 0;

}