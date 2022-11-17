#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    int a, b;
    int count;
    vector<pair<int, int>> v;
    vector<int> rank;

    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> a >> b;
        v.push_back({a, b});
    }

    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;
            
            if(v[i].first < v[j].first && v[i].second < v[j].second)
                count++;
        }
        rank.push_back(count + 1);
    }

    for(auto i : rank)
        cout << i <<' ';

    return 0;
}