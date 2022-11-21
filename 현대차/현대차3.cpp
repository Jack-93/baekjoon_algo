#include <iostream>
using namespace std;

int main() {
	int dice=0;
	int dice_count=0;

	int jump_count=0;
	int table_input=0;
	cin>>table_input;
    cin>>jump_count;

	int table[table_input];
    for(int i=0;i<table_input;i++) table[i]=0;

	//jump_count=2 -> jumpfrom[0,1] : jumpto[0,1]
	int jumpfrom[jump_count];
	int jumpto[jump_count];
	for(int i=0;i<jump_count;i++){
		cin>>jumpfrom[i];
		cin>>jumpto[i];
	}


	int dice_res=0;
	int min=0;
	dice = rand()%6; // 난수 생성
	for(int i=0;i<table_input;i++){

		dice_res += dice*i;
		if(table[table_input]==1) cout<<min;
		dice_count++;
	}
	return 0;
}
