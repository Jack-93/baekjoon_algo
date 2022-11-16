#include <iostream>
using namespace std;

int main()
{
    int n;
    int min, max;
    int num;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if(i == 0)
        min = max = num;

        if(min >= num)
            min = num;

        if(max <= num)
            max = num;
    }
    cout << min << " " << max;

    return 0;
}