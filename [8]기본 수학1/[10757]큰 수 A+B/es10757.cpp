#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int a, b, c;
    int s1L, s2L, maxLength;
    bool biggerTen = false;
    string s1, s2;
    vector<int> v;

    cin >> s1 >> s2;

    s1L = s1.length();
    s2L = s2.length();
    maxLength = max(s1L, s2L);

    for(int i = 1; i <= maxLength; i++){
        a = s1L - i < 0 ? 0 : (s1[s1L - i] - '0');
        b = s2L - i < 0 ? 0 : (s2[s2L - i] - '0');
    
        c = a + b;

        if(biggerTen){
            c++;
            biggerTen = false;
        }

        if(c >= 10){
            c -= 10;
            biggerTen = true;
        }

        v.push_back(c);
    }

    if(biggerTen)
        v.push_back(1);

    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i];
    }
    
    return 0;
}