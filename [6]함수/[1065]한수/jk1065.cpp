#include <iostream>
using namespace std;

int main()
{
    //�? ?���? ?��차수?�� 계산
    //123 -> 각자리�?? +1?���?�? ?��?��
    //111 -> 각자리�?? +0?���?�? ?��?��
    //963 -> 각자리�?? -3?���?�? ?��?��
    string ins; // '1' '0' '0' '0'보다 ?��거나 같다
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
