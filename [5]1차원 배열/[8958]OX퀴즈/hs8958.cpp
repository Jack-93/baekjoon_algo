#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    int count;
    int num;
    char str[80] = {0};

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        num = 0;
        count = 0;
        cin >> str;

        for (int j = 0; str[j] != 0; j++)
        {
            if (str[j] == 'O')
            {
                count++;
                num += count;
            }

            else
            {
                count = 0;
            }
        }
        cout << num << '\n';
        memset(str, 0, sizeof(str));
    }

    return 0;
}