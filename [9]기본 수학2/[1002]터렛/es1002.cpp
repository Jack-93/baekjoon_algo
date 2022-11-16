#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

    int t;
    pair<int, int> p1;
    pair<int, int> p2;
    int r1, r2;
    int d;
    int answer; 

    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> p1.first >> p1.second >> r1 >> p2.first >> p2.second >> r2;

        d = pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2);
        
        if(d == 0 && r1 == r2)                         // 두 원이 같은 경우
            answer = -1;
        else if(d < pow(r1 + r2, 2) && d > pow(r1 - r2, 2))      //두 점에서 만나는 경우
            answer = 2;
        else if(d == pow(r1 + r2, 2) || d == pow(r1 - r2, 2)) // 한 점에서 만나는 경우
            answer = 1;
        else
            answer = 0;
        cout << answer << '\n';

    }
    return 0;
}