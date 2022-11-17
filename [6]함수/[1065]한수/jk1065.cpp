#include <iostream>
using namespace std;

int main()
{
    //각 자리 등차수열 계산
    //123 -> 각자리가 +1이므로 한수
    //111 -> 각자리가 +0이므로 한수
    //963 -> 각자리가 -3이므로 한수
    string ins; // '1' '0' '0' '0'보다 작거나 같다
    int comp = 0;

    cin >> ins;
    for (int i = 0; i < ins.length(); i++)
    {
        // cout << ins[i] << "\n";
    }
    comp = ins[ins.length() - 1] - ins[ins.length() - 2];
    cout << comp;

    return 0;
    // if (ins[3] - ins[2] == ins[2] - ins[1] && ins[2] - ins[1] == ins[1] - ins[0])
}