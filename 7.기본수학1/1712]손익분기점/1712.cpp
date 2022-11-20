#include <iostream>
using namespace std;

int break_even(int a, int b, int c){
    if(b>=c) return -1;
    else return (a/(c-b))+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int stick_cost;
    int changed_cost;
    int price;
    // all making cost = a+b*count;
    // price = c*count;
    int count=0;

    cin>>stick_cost;
    cin>>changed_cost;
    cin>>price;

    cout<<break_even(stick_cost,changed_cost,price);

    return 0;
}
