#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    bool prime = true;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            prime = true;
        }
        else if (prime)
        {
            prime = false;
            count++;
        }
    }
    cout << count;

    return 0;
}