#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int arr;

    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr;
        if (arr < x)
        {
            cout << arr << " ";
        }
    }
}