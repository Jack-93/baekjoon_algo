#include <iostream>
using namespace std;

int main()
{
    int max;
    int arr[9];
    int count;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    count = 0;

    for (int i = 0; i < 9; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            count = i;
        }
    }
    cout << max << '\n' << count + 1;

    return 0;
}