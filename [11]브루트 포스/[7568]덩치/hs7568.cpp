#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int w[50] = {0};
    int h[50] = {0};
    int rank[50];

    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> h[i];
        rank[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (w[i] < w[j] && h[i] < h[j])
                rank[i]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << rank[i] << " ";
    }
    return 0;
}