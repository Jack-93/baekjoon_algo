#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n>=2){
        return fibo(n-1)+fibo(n-2);
    }
    else if(n==1) return 1;
    else return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    cin>>input;
    cout<<fibo(input);

    return 0;
}
