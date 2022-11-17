#include <iostream>
using namespace std;

//
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int allspend;
    int num_type;
    int allcount=0;
    cin>>allspend>>num_type;
    int price[num_type], number[num_type];
    for(int i=0;i<num_type;i++){
        cin>>price[i]>>number[i];
    }
    for(int j=0;j<num_type;j++){
        allcount+=price[j]*number[j];
    }

    if(allspend==allcount){
        cout<<"Yes";
    }
    else cout<<"No";


    return 0;
}
