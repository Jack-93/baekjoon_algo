#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int result = 0;
    string str;
    getline(cin, str);

    for (int i = 0; str[i] != NULL; i++)
    {
        result += arr[str[i] - 'A'];
    }
    cout << result;

    return 0;
}