#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string s;
    vector<int> v;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        v.push_back(s[i] - '0');
    }

    sort(v.begin(), v.end(), greater<int>());

    for(auto i : v)
        cout << i;

    return 0;
}