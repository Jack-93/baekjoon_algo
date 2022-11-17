#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;

    cin >> s;
    s.push_back('?');
    s.push_back('?');
    s.push_back('!');

    cout << s;
    
    return 0;
}