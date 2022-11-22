#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> str;
    for(int i=0; i<10; i++) str.push_back(rand()%100);
    sort(str.begin(), str.end());
    for(int i=0;i<str.size();i++) cout<<str[i]<<" ";
    // .size() -> vector size return;


    return 0;
}
