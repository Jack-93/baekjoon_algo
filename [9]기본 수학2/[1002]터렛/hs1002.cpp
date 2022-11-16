#include <iostream>
using namespace std;

int main()
{
    int t;
    int x1, y1, r1, x2, y2, r2;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        int nejub = (r1 - r2) * (r1 - r2);
        int owejub = (r1 + r2) * (r1 + r2);

        if (d == 0) 
        {
            if (nejub == 0)
                cout << "-1" << '\n';
            else
                cout << "0" << '\n';
        }

        else if (d == nejub || d == owejub)
            cout << "1" << '\n';
        else if (nejub < d && d < owejub)
            cout << "2" << '\n';
        else
            cout << "0" << '\n';
    }
    return 0;
}