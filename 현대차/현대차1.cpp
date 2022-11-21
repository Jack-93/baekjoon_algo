#include <iostream>
using namespace std;
// 분할정복 DnC 문제..

int partition(int str[][100], int row, int col){

	/*
	int left=*str[0][0];
	int mid=str[row/2][col/2];
	int right=str[row][col];
	int pivot; // 1,2,4,8.16;
	*/
	// matrix(str, row/2, col/2)
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=row;j++)
		{
			if(str[i][j] == str[i][j++])
			{
				if(str[i][j] == str[i++][j]) continue;
				else return partition(str, i/2, j/2);
			}
		}
	}
	return 0;
}
int main() {
	int input;
	cin >> input;
	cout << "Hello Goorm! Your input is " << input << endl;

	int col=input;
	int row=input;
	int str[100][100];

	// cin matrix -> power(input)
	for(row=1;row<=input;row++){
		for(col=1;col<=input;col++){
			cin>>str[row][col];
		}
		cout<<"\n";
	}

	partition(str, row, col);
	return 0;
}
