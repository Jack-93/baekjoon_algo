#include <iostream>
using namespace std;

// "- ¹®ÀÚ¿­ '0'"
int main()
{
    int num=0;
    cin>>num;
    char input[101]={0,};
    int res=0;
    for(int i=0;i<num;i++) {
        cin>>input[i];
        res+=input[i]-'0';
    }
    cout<<res;

	return 0;
}
