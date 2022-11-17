#include <iostream>
using namespace std;

int main()
{
    int test;
    char ox[80] = {};
    int count = 0;
    int score = 0;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> ox;
        for (int j = 0; ox[j] != 0; j++)
        {
            if (ox[j] == 'O')
            {
                count++;
                score += count;
            }
            else
            {
                count = 0;
            }
            // if (ox[i] == "")
            // {
            //     return 0;
            // }
        }
        cout << score << "\n";

        score = 0;
        count = 0;
    }

    return 0;
}