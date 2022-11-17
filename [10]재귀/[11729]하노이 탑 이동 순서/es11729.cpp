#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int end, int via){
    
    if(n == 1){
        cout << start << ' ' << end <<'\n';
        return;
    }        
    hanoi(n - 1, start, via, end);
    cout << start << ' ' << end <<'\n';
    hanoi(n - 1, via, end, start);
    return;
}

int main(){

    int n;
    
    cin >> n;
    cout << (int)pow(2, n) - 1 << '\n';
    hanoi(n, 1, 3, 2);

    return 0;

}