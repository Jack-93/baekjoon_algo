#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int input;

    cin >> str;

    for (int i = 0; i < 8; i++)
    {
        while (1)
        {
            input = str.find(arr[i]);
            if (input == string::npos)
                break;
        
            str.replace(input, arr[i].length(), "1");
        }
    }
    cout << str.length();

    return 0;
}