#include <iostream>
using namespace std;

bool han(int n){

  int a, b, d;

  if(n < 100)
    return true;
  a = n % 10;
  b = (n / 10) % 10;
  d = a - b;
  n /= 10;

  a = n % 10;
  b = (n / 10) % 10;
  if(d != (a - b))
    return false;
  
  if(n >= 100){
    n /= 10;
    a = n % 10;
    b = (n / 10) % 10;
    if (d != (a - b))
      return false;
  }
  return true;
}

int main(){

  int input; 
  int count = 0;
  cin >> input;

  for(int i = 1 ; i <= input; i++){
    if(han(i))
      count++;
  }
  
  cout << count;
  return 0;
}