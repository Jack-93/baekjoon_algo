#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        int num[i];
        cin >> num[i];

        if (max <= num[i])
        {
            max = num[i];
            count = i + 1;
        }
    }
    cout << max << "\n";
    cout << count;

    return 0;
}