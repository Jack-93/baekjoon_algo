#include <iostream>
using namespace std;

int main()
{
    int n, m;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> n >> m)
    {
        if (n > 10 || m > 10)
        {
            break;
        }
        if (n == 0 && m == 0)
        {
            break;
        }
        cout << n + m << "\n";
    }
    return 0;
}