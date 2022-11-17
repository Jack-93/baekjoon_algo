#include <iostream>
using namespace std;

/*ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
int main(){
    bool input[31] = {false,};
    for(int j=1;j<=28;j++){
        int n;
        cin>>n;
        input[n]=true;
    }
    for(int i=1;i<=30;i++){
        if(input[i]==false) cout<<i<<endl;
    }
    return 0;
}
