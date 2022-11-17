#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 0;
    int count = 0;
    int result = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
                count++; 
        }

        if (count == 2)
            result++;
        count = 0;
    }
    cout << result << '\n';

    return 0;
}