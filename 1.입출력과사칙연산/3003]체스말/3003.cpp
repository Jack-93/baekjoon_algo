#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1 1 2 2 2 8
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    cout<<1-a<<" "<<1-b<<" "<<2-c<<" "<<2-d<<" "<<2-e<<" "<<8-f;

    return 0;
}
