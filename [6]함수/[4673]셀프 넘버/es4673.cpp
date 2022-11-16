#include <iostream>
using namespace std;

int d(int n){
  int result;
  result = n;
  while(n >= 10){
    result += (n % 10);
    n /= 10; 
  }
  result += n;

  return result;
}

int main(){

  int arr[10000] = {0};
  int tmp;

  for(int i = 1; i < 10000; i++){
    tmp = d(i);

    if(tmp < 10000)
      arr[tmp]++;
  }

  for(int i = 1; i < 10000; i++){
    if(!arr[i])
      cout << i << '\n';
  }

  return 0;
}