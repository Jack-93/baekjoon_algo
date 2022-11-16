#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int num;
    int count;

    while (1)
    {
        cin >> n;
        if(!n)
            break;
        
        for (int i = n + 1; i <= 2 * n; i++)
        {
            num = sqrt(i);
            if (num == 1 && i != 1)
            {
                count++;
                continue;
            }
            if (i % 2)          //홀수
            {
                for (int j = 2; j <= num; j++)
                {
                    if (!(i%j))
                        break;
                    if (j == num)
                        count++;
                }
            }
        }
        cout << count << '\n';
        count = 0;
    }
    return 0;
}