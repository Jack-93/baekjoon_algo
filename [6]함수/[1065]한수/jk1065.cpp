#include <iostream>
using namespace std;

int main()
{
    //ê°? ?žë¦? ?“±ì°¨ìˆ˜?—´ ê³„ì‚°
    //123 -> ê°ìžë¦¬ê?? +1?´ë¯?ë¡? ?•œ?ˆ˜
    //111 -> ê°ìžë¦¬ê?? +0?´ë¯?ë¡? ?•œ?ˆ˜
    //963 -> ê°ìžë¦¬ê?? -3?´ë¯?ë¡? ?•œ?ˆ˜
    string ins; // '1' '0' '0' '0'ë³´ë‹¤ ?ž‘ê±°ë‚˜ ê°™ë‹¤
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
