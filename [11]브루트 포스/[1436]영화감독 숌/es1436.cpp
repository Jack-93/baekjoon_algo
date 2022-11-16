#include <iostream>

using namespace std;

int main(){

    int n; 
    int count = 0;
    int ncount;
    int i = 0;
    cin >> n;

    while(n != count){
        i ++;
        ncount = 0;
        for(int j = i ;j > 0; j /= 10){
            if(j % 10 == 6)
                ncount ++;
            else
                ncount = 0;
            if(ncount == 3){
                count++;
                break; 
            }
        }
    }
    cout << i;
    return 0;
}