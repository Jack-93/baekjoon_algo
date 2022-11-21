#include <iostream>
using namespace std;

void exchangesort(int s[])
{
	int i, j, n;
	int temp = 0;
	for (i = 0; i <= n - 1; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			if (s[j] < s[i])
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}

int main()
{
    int min_gap=0;
	int s[]={};
	for(int i=0;i<6;i++) cin>>s[i];
	exchangesort(s);
	for (int i = 0; i < 4; i++)
	{
        if(s[i+1]-s[i]<min_gap) min_gap=s[i+1]-s[i];
	}
    cout << min_gap;
	return 0;
}
