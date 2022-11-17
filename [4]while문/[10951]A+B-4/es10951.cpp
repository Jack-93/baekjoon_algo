#include <iostream>
using namespace std;

int main(){

  int a, b;

  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  while(1){
    cin >> a >> b;
    if(cin.eof())
      break;
    cout << a + b << '\n';
    
  }

  return 0;

}