#include <iostream>
using namespace std;

int main(){

  int input, result, count = 0;

  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  cin >> input;
  result = input;
  
  do
  {
    result = ((result % 10) * 10) + ((result / 10 + result % 10) % 10);
    count++;
  } while (input!=result);
  
  cout << count;
  return 0;
}