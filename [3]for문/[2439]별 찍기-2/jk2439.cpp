#include <iostream>
using namespace std;

int main()
{
    int n;
    string a = "*";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << a;
        }
        cout << "\n";
    }

    return 0;
}

//i=0 -> j=0 : " ", j=0 : x