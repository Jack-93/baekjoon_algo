#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int result;
    int arr[10] = {0};

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;
    result = a * b * c;

    while (result >= 10)
    {
        arr[result % 10]++;
        result /= 10;
    }
    arr[result]++;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}