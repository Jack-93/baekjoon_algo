#include <iostream>

using namespace std;

int main(){

    int n, m, sum = 0, first = -1;
    bool pCheck;

    cin >> n >> m;

    for(int i = n; i <= m; i++){
        pCheck = true;

        if(i == 1)
            continue;

        if(i == 2){
            sum += i;
            first = i;
            continue;
        }
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                pCheck = false;
                break;
            }
        }
        if(pCheck){
            sum += i;
            if(first == -1)
                first = i;
        }
    }

    if(first == -1)
        cout << -1;
    else 
        cout << sum << '\n' << first;
    return 0;
}