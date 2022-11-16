#include <iostream>
using namespace std;

int main(){

  int input, sum = 0;

  cin >> input; 

  for(int i = input; i > 0; i--){
    sum += i;
  }

  cout << sum;
  return 0;
}