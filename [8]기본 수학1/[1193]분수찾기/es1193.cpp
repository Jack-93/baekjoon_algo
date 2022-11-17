#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    int output = 0;

    cin >> a >> b >> c;

    if (b >= c) {
        cout << -1;
        return 0;
    }

    output = a / (c - b) + 1;

    cout << output;

    return 0;
}