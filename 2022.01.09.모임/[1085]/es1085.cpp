#include <iostream>

using namespace std;

int main(){

    int x, y, w, h;
    int d1, d2;

    cin >> x >> y >> w >> h;

    d1 = x < w - x ? x : w - x;
    d2 = y < h - y ? y : h - y;

    cout << (d1 < d2? d1 : d2) ;

    return 0;
}