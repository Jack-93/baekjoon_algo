#include <iostream>
using namespace std;

int main()
{
    int num;
    double mid, max = 0;
    double result;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int sub[i];
        cin >> sub[i];

        mid = sub[i];

        if (max <= sub[i])
        {
            max = sub[i];
        }
        result += mid;
    }

    result = (result / max * 100) / num;
    cout << result;

    return 0;
}