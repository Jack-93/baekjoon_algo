#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    string str;

    cin >> a >> b;

    for (int i = 2; i > 0; i--)
    {
        if (a[i] > b[i])
        {
            str = a;
            break;
        }
        if (a[i] < b[i])
        {
            str = b;
            break;
        }
    }
    cout << str[2] << str[1] << str[0];

    return 0;
}