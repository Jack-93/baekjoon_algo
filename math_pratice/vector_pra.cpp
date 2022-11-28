#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string name;
	string search;
	vector<string> v;
	vector<string>::iterator it;

	for (int i = 0; i < 5; i++)
	{
		cout << "name : ";
		cin >> name;
		v.push_back(name);
	}

	cout << endl;
	cout << "delete : ";
	cin >> search;

	it = find(v.begin(), v.end(), search);

	it = v.erase(it);

	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

	return 0;
}
