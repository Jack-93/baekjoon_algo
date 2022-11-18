#include <iostream>
using namespace std;

int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else if(n==0) return 1;
    else return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;
    cin>>input;
    cout<<fact(input);

    return 0;
}
