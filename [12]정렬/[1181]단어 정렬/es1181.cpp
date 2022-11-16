#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
	if(a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}
int main(){

	int n;
	string s;
	vector<string> v;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for(int i = 0; i < n; i ++){
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);

	cout << v[0] << '\n';
	for(int i = 1; i < v.size(); i ++){
		if(v[i-1] == v[i])
			continue;
		cout << v[i] << '\n';
	}

	return 0;
}