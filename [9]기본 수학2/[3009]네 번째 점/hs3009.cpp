#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int x, y;
    vector<pair<int, int> > p;    //{x, y}

    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        p.push_back({x, y});
    }

    if (p[0].first == p[1].first)
        x = p[2].first;
    else if (p[0].first == p[2].first)
        x = p[1].first;
    else
        x = p[0].first;

    if (p[0].second == p[1].second)
        y = p[2].second;
    else if (p[0].second == p[2].second)
        y = p[1].second;
    else
        y = p[0].second;

    cout << x << " " << y;

    return 0;
}














/*int main()
{
    int x1, y1, x2, y2, x3, y3, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    x = x1;
    y = y1;
    if (x == x2)
        x = x3;
    else if (x == x3)
        x = x2;

    if (y == y2)
        y = y3;
    else if (y == y3)
        y = y2;

    cout << x << " " << y << '\n';

    return 0;
}*/



/*
int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    int x[3];
    int y[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];

        if (x[0] == x[1])
        {
            cout << x[2] << " ";
        }
        else if (x[0] == x[2])
        {
            cout << x[1] << " ";
        }
        else
        {
            cout << x[0] << " ";
        }

        if (y[0] == y[1])
        {
            cout << y[2];
        }
        else if (y[0] == y[2])
        {
            cout << y[1];
        }
        else
        {
            cout << y[0];
        }
    }
    return 0;
}*/