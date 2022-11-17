#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string input;
    int count = 0;

    cin >> n;

    while (n)
    {
        n--;
        cin >> input;
        bool check = true;

        for (int i = 0; i < input.length(); i++)
        {
            for (int j = i + 1; j < input.length(); j++)
            {
                if (input[i] == input[j] && input[j] != input[j - 1])
                {
                    check = false;
                    break;
                }
            }
        }
        if (check)
            count++;
    }
    cout << count;

    return 0;
}