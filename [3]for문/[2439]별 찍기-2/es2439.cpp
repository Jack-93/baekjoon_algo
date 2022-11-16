#include <iostream>
using namespace std;

int main(){

  int n;

  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);

  cin >> n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n - i; j++){
      cout << ' ';
    }
    for(int j = 1; j <= i; j++){
      cout << '*';
    }
    cout << '\n';
  }
  
  return 0;
}