#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{

    int t, count_group = 0;
    bool check = false;
    string s, g = "";

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> s;

        g = "";

        for (int j = 0; j < s.length(); j++)
        {
            if(j == 0){
                g += s[j];
                continue;
            }

            if(s[j - 1] == s[j])
                continue;
            for(int k = 0; k < g.length(); k++){
                
                if(s[j] == g[k]){
                    check = true;
                    break;
                }

            }

            if(check)
                break;
                
            g += s[j];

        }

        if(!check)
            count_group++;

        check = false;
    }

    cout << count_group ;
    return 0;
}