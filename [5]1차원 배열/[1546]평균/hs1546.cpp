#include <iostream>
using namespace std;

int main()
{
    int n;
    int max = 0;
    double avg = 0;
    int score[1000] = {0};

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> score[i];

        if (max < score[i])
            max = score[i];
            avg += score[i];
    }
    avg = ((avg / max) * 100) / n;

    cout << avg;

    return 0;
}