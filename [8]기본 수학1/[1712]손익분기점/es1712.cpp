#include <iostream>

using namespace std;

int main(){

    int input;
    int a = 1 , b = 0;
    cin >> input;

    while((a + (6 * b)) < input){
        a += 6 * b;
        b++;
    }

    cout << b + 1;

    return 0;

}