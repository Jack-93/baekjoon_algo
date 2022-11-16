#include <iostream>
using namespace std;

int main(){

  int t, a, b;

  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  cin >> t;
  
  for (int i = 1;i <= t; i++){
    cin >> a >> b;
    cout << "Case #" << i << ": " << a + b;

    if(i != t)
      cout << '\n';
  }


  return 0;
}