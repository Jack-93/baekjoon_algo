#include <iostream>
using namespace std;

int main()
{
    int a, x;
    cin >> a >> x;

    cout << a * (x % 10) << "\n";
    cout << a * ((x / 10) % 10) << "\n";
    cout << a * (x / 100) << "\n";
    cout << a * x;
    return 0;
}
