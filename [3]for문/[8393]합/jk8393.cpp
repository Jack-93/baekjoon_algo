#include <iostream>
using namespace std;

int main()
{
    int n;
    int max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        max += i;
    }
    cout << max;
}