#include <iostream>

using namespace std;

int main(){

    int t, h, w, n;
    int x, y;
    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> h >> w >> n;

        y = n % h == 0? h : n % h;
        x = n % h == 0? n / h : n / h + 1;
        
        cout << y;
        if(x < 10){
            cout << '0' << x << endl;
        }
        else
            cout << x << endl;

    }

    return 0;
}