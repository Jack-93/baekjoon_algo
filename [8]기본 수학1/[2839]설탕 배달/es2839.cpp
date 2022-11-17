#include <iostream>

using namespace std;

int main(){

    int n, fkg, tkg;
    bool end = false;
    cin >> n;

    fkg = n / 5;

    for(int i = fkg; i >= 0; i--){
        for(int j = 0; 5 * i + 3 * j <= n; j++){
            if( 5 * i + 3 * j == n){
                end = true;
                fkg = i;
                tkg = j;
                break;
            }
        }

        if(end)
            break;

        if(i == 0 && end == false){
            fkg = -1;
            tkg = 0;
            break;
        }
    }

    cout << fkg + tkg;

    return 0;
}