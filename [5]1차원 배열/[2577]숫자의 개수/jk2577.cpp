#include <iostream>
using namespace std;

int main()
{
    int cou = 0;
    int a, b, c;
    int com;
    int count[10] = {};

    cin >> a >> b >> c;
    com = a * b * c;

    // cout << com << "\n";
    while (com > 0)
    {
        count[com % 10]++;
        com = com / 10;
        cou++;
    }
    // cout << cou << "\n";

    // for (int i = 0; i < cou; i++)
    // {
    //     count[com % 10]++; // 1716 6++, 171 1++, 17 7++, 1++
    //     com /= 10;         //1716/10 = 171, 171/10 = 17, 17/10 = 1, 1/10 = 0???
    // }
    for (int i = 0; i <= 9; i++)
    {
        cout << count[i] << "\n";
    }
}