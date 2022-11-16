#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 0;
    char input;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        num += (input - '0');
    }

    cout << num;

    return 0;
}