#include <iostream>
using namespace std;

//
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int hour, min, t;
    cin>>hour>>min>>t;

    hour += t / 60;
    min += t % 60;

    if(min >= 60){
        hour += 1;
        min -= 60;
    }
    if(hour >= 24){
        hour -= 24;
    }

    cout<<hour<<" "<<min;
    return 0;
}
