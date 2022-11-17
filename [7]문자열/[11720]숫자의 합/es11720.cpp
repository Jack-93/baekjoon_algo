#include <iostream>
#include <string>
using namespace std;

int main(){
  
  int n;
  int sum = 0;
  string str;

  cin >> n;
  cin >> str;

  
  while(1){
    sum += str.back() - 48;
    str.pop_back();

    if(str.empty())
      break;
  }
  cout << sum;
  
  return 0;
}