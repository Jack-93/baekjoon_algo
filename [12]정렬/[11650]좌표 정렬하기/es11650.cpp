#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int>b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main(){

    int n;
    int a, b;
    vector<pair<int, int>> p;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        p.push_back({a, b});
    }

    sort(p.begin(), p.end(), compare);

    for(auto i : p)
        cout << i.first << ' ' << i.second << '\n';

    return 0;
}