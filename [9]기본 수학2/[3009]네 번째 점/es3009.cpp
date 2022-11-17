#include <iostream>
#include <vector>
using namespace std;

int main(){

    int x, y, count;
    vector<pair <int, int>> v;
    

    for(int i = 0; i < 3; i++){
        cin >> x >> y;
        v.push_back({x, y});
    }

    if(v[0].first == v[1].first)
        x = v[2].first;
    else if(v[0].first == v[2].first)
        x = v[1].first;
    else

        x = v[0].first;
    
    if(v[0].second == v[1].second)
        y = v[2].second;
    else if(v[0].second == v[2].second)
        y = v[1].second;
    else
        y = v[0].second;

    cout << x << ' ' << y;
    return 0;
}