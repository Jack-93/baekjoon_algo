#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int input;
    vector<int> v;

    while(1){
        v.clear();
        for (int i = 0; i < 3; i++){
            cin >> input;
            v.push_back(input);
        }
            
        if(v[0] == 0 && v[1] == 0 && v[2] == 0)
            break;
        sort(v.begin(), v.end());

        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
        {
            cout << "right" << '\n';
            continue;
        }

        cout << "wrong" << '\n';
    }

    return 0;
}