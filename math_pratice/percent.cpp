#include <iostream>
using namespace std;

int main()
{
    double a, b = 0;
    cin >> a >> b;
    cout << a << "'s " << b << "% = " << a * (b / 100) << "\n";
    cout << b << "'s " << a << "% = " << b * (a / 100);
}
