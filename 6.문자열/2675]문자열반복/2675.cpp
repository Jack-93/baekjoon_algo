#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int test_case=0;
    cin>>test_case;

    int rep_count1=0;

    char str[160];

    for(int i=0;i<test_case;i++){
        cin>>rep_count1;
        cin>>str;
        for(int j=0;j<strlen(str);j++){
            for(int k=0;k<rep_count1;k++){
                cout<<str[j];
            }
        }
        cout<<"\n";
    }
	return 0;
}
