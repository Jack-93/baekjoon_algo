#include <iostream>
using namespace std;

//
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int all;
    cin>>all;
    int number[all];
    int what;
    int count=0;

    for(int i=0;i<all;i++){
        cin>>number[i];
    }
    cin>>what;

    for(int j=0;j<all;j++){
        if(number[j]==what) count++;
    }

    cout<<count;
    return 0;
}
