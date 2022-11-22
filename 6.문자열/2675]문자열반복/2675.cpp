#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    int test_case=0;
    cin>>test_case;
    int rep_count=0;
    char string;
    cin>>rep_count;

    vector<char> str;
    str.push_back(string);

    for(int i=0;i<str.size();i++) cout<<str[i]*rep_count<<" ";

	return 0;
}
