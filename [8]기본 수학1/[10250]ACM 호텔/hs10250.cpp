#include <iostream>
using namespace std;

int main()
{
    int num, h, w, n;
    int floor, room;
    int result;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> h >> w >> n;

        if (n % h == 0)
        {
            floor = h * 100;
            room = n / h;
        }

        else
        {
            floor = n % h * 100;
            room = n / h + 1;
        }

        result = floor + room;
        cout << result << '\n';
    }
    return 0;
}