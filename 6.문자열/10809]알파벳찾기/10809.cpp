#include <iostream>
#include <cstring>
using namespace std;
// location of alphabet
// alpha[26] = "a","b","c" ...
// if alpha[0] == true -> location of "a"
// ==false -> return -1 ( initial )
int main()
{
    char input[101]={0,};
    int alpha[26];
    cin>>input;

    // init -1
    for(int i=0;i<26;i++){
        alpha[i]=-1;
    }
    for(int i = 'a'; i <= 'z'; i++){
        for(int j = 0; j < 101; j++){
            if(i == input[j]){
                cout<<j<<" ";
                break;
            }
            if(j == 99){
                cout<<"-1"<<" ";
            }
        }
    }

    // for(int i=0;i<26;i++){
    //     cout<<alpha[i]<<" ";
    // }

	return 0;
}
