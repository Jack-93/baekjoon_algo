#include <iostream>

using namespace std;

//a~z -> counting -> 높으면 대문자 출력
int main()
{
    string ins;
    int count[27] = {0};
    int num = 0;
    int max = 0;

    getline(cin, ins);
    for (int i = 0; i < ins.length(); i++)
    {
        if (ins[i] == 'a' || ins[i] == 'A')
        {
            count[1]++;
        }
        if (ins[i] == 'b' || ins[i] == 'B')
        {
            count[2]++;
        }
        if (ins[i] == 'c' || ins[i] == 'C')
        {
            count[3]++;
        }
        if (ins[i] == 'd' || ins[i] == 'D')
        {
            count[4]++;
        }
        if (ins[i] == 'e' || ins[i] == 'E')
        {
            count[5]++;
        }
        if (ins[i] == 'f' || ins[i] == 'F')
        {
            count[6]++;
        }
        if (ins[i] == 'g' || ins[i] == 'G')
        {
            count[7]++;
        }
        if (ins[i] == 'h' || ins[i] == 'H')
        {
            count[8]++;
        }
        if (ins[i] == 'i' || ins[i] == 'I')
        {
            count[9]++;
        }
        if (ins[i] == 'j' || ins[i] == 'J')
        {
            count[10]++;
        }
        if (ins[i] == 'k' || ins[i] == 'K')
        {
            count[11]++;
        }
        if (ins[i] == 'l' || ins[i] == 'L')
        {
            count[12]++;
        }
        if (ins[i] == 'm' || ins[i] == 'M')
        {
            count[13]++;
        }
        if (ins[i] == 'n' || ins[i] == 'N')
        {
            count[14]++;
        }
        if (ins[i] == 'o' || ins[i] == 'O')
        {
            count[15]++;
        }
        if (ins[i] == 'p' || ins[i] == 'P')
        {
            count[16]++;
        }
        if (ins[i] == 'q' || ins[i] == 'Q')
        {
            count[17]++;
        }
        if (ins[i] == 'r' || ins[i] == 'R')
        {
            count[18]++;
        }
        if (ins[i] == 's' || ins[i] == 'S')
        {
            count[19]++;
        }
        if (ins[i] == 't' || ins[i] == 'T')
        {
            count[20]++;
        }
        if (ins[i] == 'u' || ins[i] == 'U')
        {
            count[21]++;
        }
        if (ins[i] == 'v' || ins[i] == 'V')
        {
            count[22]++;
        }
        if (ins[i] == 'w' || ins[i] == 'W')
        {
            count[23]++;
        }
        if (ins[i] == 'x' || ins[i] == 'X')
        {
            count[24]++;
        }
        if (ins[i] == 'y' || ins[i] == 'Y')
        {
            count[25]++;
        }
        if (ins[i] == 'z' || ins[i] == 'Z')
        {
            count[26]++;
        }
    }

    int ind = 0; // index+65=알파벳 출력 아스키코드 65=A
    for (int i = 1; i < 27; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            ind = i;
        }
    }
    for (int i = 1; i < 27; i++)
    {
        if (max == count[i])
        {
            num++;
        }
    }
    if (num > 1)
        cout << "?";
    else
        cout << char(ind + 64);

    return 0;
}
