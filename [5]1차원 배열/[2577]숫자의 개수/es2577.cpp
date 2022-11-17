#include <iostream>
using namespace std;

int main(){

  int arr[10]={0};
  int a, b, c, result;

  cin >> a >> b >> c;

  result = a * b * c;
  
  while(result >= 10){
    arr[result%10]++;
    result /= 10;
  }

  arr[result]++;

  for(int i = 0 ; i < 10; i ++){
    cout << arr[i] << '\n';
  }
  
  return 0;
}