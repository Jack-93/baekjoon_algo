#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8;

    if (num1 == 1 && num2 == 2 && num3 == 3 && num4 == 4 && num5 == 5 && num6 == 6 && num7 == 7 && num8 == 8)
    {
        cout << "ascending";
    }
    else if (num1 == 8 && num2 == 7 && num3 == 6 && num4 == 5 && num5 == 4 && num6 == 3 && num7 == 2 && num8 == 1)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
}