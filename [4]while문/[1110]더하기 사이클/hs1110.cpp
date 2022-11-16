#include <iostream>
using namespace std;

int main()
{
    int input, result;
    int count = 0;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;
    result = input;

    while (1)
    {
        result = ((result % 10) * 10) + ((result / 10 + result % 10) % 10);
        count++;

        if (input == result)
            break;
    }
    cout << count;

    return 0;
}