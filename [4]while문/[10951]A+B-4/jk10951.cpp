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
        cout << n + m << "\n";
        if (n > 10 || m > 10)
        {
            break;
        }
        // if (cin.eof() == true)
        // {
        //     break;
        // }
    }
    return 0;
}