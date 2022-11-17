#include <iostream>
using namespace std;

int main()
{
    int c, n;
    int count;
    int arr[1000] = {0};
    double avg;
    double rate;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << fixed;
    cout.precision(3);
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> n;
        avg = 0;
        count = 0;
        rate = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            avg += arr[j];
        }

        avg /= n;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] > avg)
            {
                count++;
            }
        }
        rate = (double)count / n * 100;
        cout << rate << "%\n";
    }

    return 0;
}