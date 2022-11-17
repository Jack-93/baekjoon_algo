#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int start, int via, int to, int n)
{
    if (n == 1)
        cout << start << " " << to << '\n';
    else
    {
        hanoi(start, to, via, n - 1);
        cout << start << " " << to << '\n';
        hanoi(via, start, to, n - 1);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << '\n';
    hanoi(1, 2, 3, n);

    return 0;
}