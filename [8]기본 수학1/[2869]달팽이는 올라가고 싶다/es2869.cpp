#include <iostream>

using namespace std;

int main(){

    int a, b, v;
    int answer;

    cin >> a >> b >> v;

    answer = v / (a - b);
    while(((a - b) * answer + a) >= v)
        answer--;
    

    while(((a - b) * answer + a) < v)
        answer ++;

    cout << answer + 1;
    return 0;
}