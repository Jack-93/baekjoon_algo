#include <iostream>
#include <cmath>

using namespace std;

// round, floor, ceil ( math.h header )
int main(){

    double a,b,v=0;
    int days=0;

    cin>>a>>b>>v;

    double length=v-a;
    days++;
    days+=ceil(length/(a-b));

    cout << days;

    return 0;

}
